#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите число x: ");
	double x;
	double fx;
	scanf("%lf", &x);

	if ((x > -33 && x < -30) || (x > 30 && x < 33))
	{
		fx = x / 2;
		printf("\nf(x) = x / 2 = %lf \n", fx);
	}
	else if ((x >= -30 && x <= -25) || (x >= 20 && x <= 25))
	{
		fx = 2 * x;
		printf("\nf(x) = 2x = %lf \n", fx);
	}
	else
	{
		fx = x;
		printf("\nf(x) = x = %lf \n", fx);
	}

	printf("\nНажмите любую кнопку чтобы продолжить...\n");
	getch();
	return 0;
}