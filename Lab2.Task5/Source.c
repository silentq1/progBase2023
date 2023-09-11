#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a;
	double b;
	double c;
	printf("Введите число a: ");
	scanf("%lf", &a);
	printf("Введите число b: ");
	scanf("%lf", &b);
	printf("Введите число c: ");
	scanf("%lf", &c);
	printf("\nКвадратное уравнение: %.1lfx^2", a);
	if (b >= 0)
	{
		printf(" + %.1lfx", b);
	}
	else
	{
		printf(" - %.1lfx", abs(b));
	}
	
	if (c >= 0)
	{
		printf(" + %.1lf = 0", c);
	}
	else
	{
		printf(" - %.1lf = 0", abs(c));
	}

	double d = b * b - (4 * a * c);
	printf("\n\nD = b^2 - 4ac = %.2lf\n", d);
	if (d > 0)
	{
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);
		printf("x1 = %.2lf\n", x1);
		printf("x2 = %.2lf\n", x2);
	}
	else
	{
		printf("Уравнение не имеет действительных корней.\n");
	}
	printf("\nНажмите любую кнопку чтобы продолжить...\n");
	getch();
	return 0;
}