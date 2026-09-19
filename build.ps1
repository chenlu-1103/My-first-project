[CmdletBinding()]
param(
    [ValidateSet('Auto', 'Gcc', 'Cl')]
    [string]$Compiler = 'Auto',
    [switch]$Clean
)

$ErrorActionPreference = 'Stop'
$repoRoot = $PSScriptRoot
$buildRoot = Join-Path $repoRoot '.build'
$sources = @(Get-ChildItem -LiteralPath $repoRoot -Filter '*.c' -File | Sort-Object Name)
if ($sources.Count -eq 0) { throw 'No .c files found in the repository root.' }

if ($Clean -and (Test-Path -LiteralPath $buildRoot)) {
    Remove-Item -LiteralPath $buildRoot -Recurse -Force
}
New-Item -ItemType Directory -Path $buildRoot -Force | Out-Null

function Resolve-Gcc {
    $command = Get-Command gcc.exe -ErrorAction SilentlyContinue
    if ($command) { return $command.Source }
    $candidates = @(
        'C:\msys64\mingw64\bin\gcc.exe',
        'C:\msys64\ucrt64\bin\gcc.exe',
        'C:\Dev-Cpp\MinGW64\bin\gcc.exe',
        'C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe'
    )
    foreach ($candidate in $candidates) {
        if (Test-Path -LiteralPath $candidate) { return $candidate }
    }
    return $null
}

function Resolve-VsDevCmd {
    $vswhere = 'C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe'
    if (-not (Test-Path -LiteralPath $vswhere)) { return $null }
    $installPath = & $vswhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2>$null
    if (-not $installPath) { return $null }
    $devCmd = Join-Path $installPath 'Common7\Tools\VsDevCmd.bat'
    if (Test-Path -LiteralPath $devCmd) { return $devCmd }
    return $null
}

function Invoke-GccBuild([string]$gcc) {
    $failed = @()
    foreach ($source in $sources) {
        $exe = Join-Path $buildRoot ($source.BaseName + '.exe')
        Write-Host "Compiling $($source.Name) -> .build/$($source.BaseName).exe"
        $output = & $gcc -std=c11 -Wall -Wextra -pedantic $source.FullName -o $exe 2>&1
        $exitCode = $LASTEXITCODE
        $output | ForEach-Object { Write-Host $_ }
        if ($exitCode -ne 0 -or -not (Test-Path -LiteralPath $exe)) {
            $failed += $source.Name
        }
    }
    return $failed
}

function Invoke-ClBuild([string]$devCmd) {
    $failed = @()
    foreach ($source in $sources) {
        $exe = Join-Path $buildRoot ($source.BaseName + '.exe')
        $obj = Join-Path $buildRoot ($source.BaseName + '.obj')
        Write-Host "Compiling $($source.Name) -> .build/$($source.BaseName).exe"
        $cmd = 'call "{0}" -arch=x64 -host_arch=x64 >nul && cl /nologo /std:c11 /W4 /utf-8 /Fe:"{1}" /Fo:"{2}" "{3}"' -f $devCmd, $exe, $obj, $source.FullName
        $output = & cmd.exe /d /s /c $cmd 2>&1
        $exitCode = $LASTEXITCODE
        $output | ForEach-Object { Write-Host $_ }
        if ($exitCode -ne 0 -or -not (Test-Path -LiteralPath $exe)) {
            $failed += $source.Name
        }
    }
    return $failed
}

$gcc = $null
$devCmd = $null
if ($Compiler -in @('Auto', 'Gcc')) { $gcc = Resolve-Gcc }
if ($Compiler -in @('Auto', 'Cl')) { $devCmd = Resolve-VsDevCmd }

if ($Compiler -eq 'Gcc' -and -not $gcc) { throw 'gcc.exe was not found. Install MinGW-w64 or use -Compiler Cl.' }
if ($Compiler -eq 'Cl' -and -not $devCmd) { throw 'Visual Studio C++ tools were not found.' }

if ($gcc) {
    $failed = @(Invoke-GccBuild $gcc)
} elseif ($devCmd) {
    $failed = @(Invoke-ClBuild $devCmd)
} else {
    throw 'No C compiler was found. Install MinGW-w64, install Visual Studio C++ tools, or run this script from a Visual Studio Developer PowerShell.'
}

if ($failed.Count -gt 0) {
    Write-Warning "Build completed with failures: $($failed -join ', ')"
    exit 1
}
Write-Host "Build completed successfully. Output: $buildRoot"