# 我的 C 语言学习项目

这是我的 C 语言学习仓库。代码按练习日期保存，重点记录从基础输入输出、类型与格式化，到循环、函数和简单算法的逐步练习过程。

作者：陈璐
学校：湖州学院
专业：人工智能（2026级）

## 仓库内容

- `*.c`：按日期或练习名称保存的 C 语言源码
- [`INDEX.md`](INDEX.md)：代码索引与每个练习的知识点
- [`PROGRESS.md`](PROGRESS.md)：学习过程与踩坑记录
- [`build.ps1`](build.ps1)：批量编译所有练习到 `.build/`
- `.editorconfig` / `.gitattributes`：统一编码和换行格式

## 快速开始

### 方式一：使用 Visual Studio

1. 用 Visual Studio 打开仓库中的单个 `.c` 文件，或新建空项目后加入源码。
2. 选择 `x64` 配置并生成项目。
3. 交互式示例请在终端中运行，按提示输入数据。

### 方式二：使用 PowerShell 批量编译

在仓库根目录运行：

```powershell
.\build.ps1
```

脚本会依次寻找 `gcc` 或 Visual Studio 的 `cl.exe`，并把可执行文件输出到 `.build/`。如果两个编译器都未找到，脚本会给出明确的安装/启动提示。

单独运行某个练习：

```powershell
.\.build\_0731_2.exe
```

## 学习主题

- 基本输入输出：`printf`、`scanf`
- 数据类型与格式说明符
- 整数进制、溢出与浮点精度
- 条件判断、三目运算符
- `for` / `while` 循环
- 自定义函数与调用
- 字符串与 `strlen`
- 简单算法：数值统计、反转数字、图案输出

## 编码约定

- 源码统一使用 UTF-8 无 BOM。
- C 文件建议使用 LF 换行。
- 新练习请放入仓库根目录，并同步更新 [`INDEX.md`](INDEX.md)。
- 不提交 `.build/`、可执行文件、对象文件和调试中间文件。

## 提交记录

提交信息尽量说明当天完成的内容，例如：

```text
0908 switch and reverse number practice
0912 nested loop pattern
```

继续学习时，优先保证每次提交都能编译，并在 `PROGRESS.md` 中记录一个收获或问题。