#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 4, задание - 3.1
*/
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void i();
void j();
void k();
void l();
int main(int argc, char* argv[])
{
    e();
}
void a()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if (a == '?') putchar('!');
        else putchar(a);
    }

}
void b()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if (a != '-') putchar(a);
        if (a == '&')
        {
            putchar('&');
            putchar('&');
        }
    }
}
void c()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if ((a >= 'a') && (a <= 'z'))
            putchar(a);
    }
}
void d()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if ((a >= 'A') && (a <= 'Z'))
            putchar(a | 0b00100000);
        else
            putchar(a);
    }
}
void e()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if ((a >= 'a') && (a <= 'z')) putchar(a & 0b11011111);
        else putchar(a);
    }
}
void f()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a != '+')
        {
            putchar(a);
            b = 0;
        }
        else
        {
            if (!b)
                putchar(a);
            b++;
        }
    }
}
void g()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a != '*')
        {
            if (b == 1)
                putchar('*');
            putchar(a);
            b = 0;
        }
        else
        {
            if (b % 2 == 1)
                putchar('+');
            b++;
        }
    }
    putchar('\n');
}
void i()
{
    int a, b = 1;
    while ((a = getchar()) != 10)
    {
        if (a == 't' && b == 1)
            b = 2;
        if (a == 'h' && b == 2)
            b = 3;
        if (a == 'e' && b == 3)
            b = 0;
        putchar(a);
        if (b == 0)
        {
            putchar(8);
            putchar(8);
            putchar(8);
            putchar(8);
            putchar(32);
            putchar(32);
            putchar(32);
            putchar(32);
            putchar(8);
            putchar(8);
            putchar(8);
            putchar(8);
            b = 1;
        }
    }
    putchar('\n');
}
void j()
{
    int a, b = '1';
    while ((a = getchar()) != 10)
    {
        if (a >= '0' && a <= '9')
        {
            if (a >= b && a <= '9' || a == '0')
            {
                putchar(a);
                b = a + 1;
            }
        }
        else
        {
            putchar(a);
            b = '1';
        }
    }
}
void k()
{
    int a, b = 1;
    while ((a = getchar()) != 10)
    {
        if (a == 'c' && b == 1)
            b = 2;
        if (a == 'h' && b == 2)
            b = 3;
        if (a == 'i' && b == 3)
            b = 4;
        if (a == 'l' && b == 4)
            b = 5;
        if (a == 'd' && b == 5)
            b = 0;
        putchar(a);
        if (b == 0)
        {
            putchar('r');
            putchar('e');
            putchar('n');
            b = 1;
        }
    }
    putchar('\n');
}
void l()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a == '{')
            b++;
        if (!b)
            putchar(a);
        if (a == '}')
            b--;
    }
    putchar('\n');
}