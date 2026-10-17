#include <stdio.h>
#include <windows.h>
#include <math.h>

void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void hideCursor()
{
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void setColor(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main(void)
{
    float k = 1.0f;
    float dir = 0.04f;
    int color = 12;

    system("title Love");
    system("color 0C");
    hideCursor();

    while (1)
    {
        float x, y;

        k += dir;
        if (k > 1.15f || k < 0.85f)
        {
            dir = -dir;
            color = 12 + rand() % 4;
        }

        gotoxy(0, 0);
        setColor(color);
        for (y = 1.3f; y > -1.1f; y -= 0.1f)
        {
            for (x = -1.2f; x < 1.2f; x += 0.05f)
            {
                float xx = x / k;
                float yy = y / k;
                float a = xx * xx + yy * yy - 1.0f;
                float inside = a * a * a - xx * xx * yy * yy * yy;

                if (inside <= 0.0f)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }

        Sleep(60);
    }

    return 0;
}

