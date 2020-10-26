#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 4, задание - 3.2
*/
void a();
void b();

int main(int argc, char* argv[])
{
    
}
void a()
{
    int a, b = 0;
    putchar('>');
    putchar('>');
    putchar(' ');
    while ((a = getchar()) != 10)
    {
        if (a < '0' || a > '9')
            b = 0;
        if (a == '.')
            b = 1;
        if (a >= '0' && a <= '9' && b > 0)
            if (b++ > 2)
                continue;
        putchar(a);
    }
    putchar('\n');
}
void b()
{
    int a, b = 1;
    putchar('>');
    putchar('>');
    putchar(' ');
    while ((a = getchar()) != 10)
    {
        if (a == '.')
            b = 0;
        else if (a != '0')
            b++;
        if (a == '0' && b > 0)
            continue;
        putchar(a);
    }
    putchar('\n');
}
