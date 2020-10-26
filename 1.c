#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 4, задание - 1
*/

int main(int argc, char* argv[])
{
    int a;
    while ((a = getchar()) != 10) {
        putchar(a | 0b00100000);
    }
    putchar('\n');
}
