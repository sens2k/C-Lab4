#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 4, задание - 3
*/
void a();
void b();
void c();
void d();
void e();
void f();
void g();

int main(int argc, char* argv[])
{

    return 0;
}

void a()
{
    int a, c = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'a')
            c++;
    }
    printf("%d\n", c);
}

void b()
{
    int a, c = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'e')
            c++;
        if (a == 'u')
            break;
    }
    printf("%d\n", c);
}

void c()
{
    int a, b, c = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'n')
            if ((b = getchar()) == 'o')
                c++;
        if (a == 'o')
            if ((b = getchar()) == 'n')
                c++;
        if (b == 10)
            break;
    }
    printf("%d\n", c);
}

void d()
{
    int a = 0;
    int plus = 0; int minus = 0; int value = 0;
    while ((a = getchar()) != 10)
    {
        if (a == '+')
        {
            plus++;
            if ((a = getchar()) == '-') value++;

        }
        if (a == '-') minus++;
    }
    printf("plus = %d, minus = %d, value = %d", plus, minus, value);
}

void e()
{
    int a = 0;
    int value = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'C')
        {
            if (((a = getchar()) == '+') && ((a = getchar()) == '+')) value++;
        }
    }
    printf("value = %d", value);
}

void f()
{
    int a, value = 0;
    while (a != 10)
    {
        if ((a = getchar()) == 'c')
            if ((a = getchar()) == 'h')
                if ((a = getchar()) == 'a')
                    if ((a = getchar()) == 'r')
                        b++;
        if (a == 10)
            break;
    }
    printf("value = %d", value);
}

void g()
{
    int a, b = 'a';
    while ((a = getchar()) != 10)
    {
        if (a == b)
            b++;
        if (a == 10)
            break;
    }
    printf("alphabet:  %d\n", b - 'a');
}