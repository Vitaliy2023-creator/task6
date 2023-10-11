#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int x, y;
	printf("Введите x: ");
	scanf("%f", &x);
	printf("Введите y: ");
	scanf("%f", &y);
	if ((x >= 0) && (x * x + y * y <= 2) && (y <= -x))
	{
		printf("Входит\n");
	}
	else
	{
		printf("Не входит\n");
	}
	system("pause");
	return 0;
}
