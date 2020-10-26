#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 4, задание - 2
*/

int main(int argc, char* argv[])
{
	int a = _getch();
	int b = _getch();
	printf("%d %d\n", a, b);
	if ((a < 0 || a > 5) || (a < 0 || a > 5)) printf("Error\n");
	else
	{
		a += 3; b += 3;
		putchar(a);
		putchar(b);
	}
	return 0;
}
