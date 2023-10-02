#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int factorial(int num)
{
	if (num = 1)
		return 1;
	else
		return num * factorial(num - 1);
}
int main()
{
	double x;
	double eps;
	double c;
	printf("Enter x value: ");
	scanf("%lf", &x);
	printf("Enter eps value: ");
	scanf("%lf", &eps);
	double y = 1;
	for (int i = 1; ; i++)
	{
		double arg = pow(-1, i) * (pow(x, 2 * i) / factorial(2 * i));
		if (fabs(arg) < eps)
		{
			break;
		}
		y += arg;
	}

	printf("y = cos(x) = %lf \n", y);

	y = 1;
	for (int i = 1; ; i++)
	{
		double arg = pow(x, i) / factorial(i);
		if (fabs(arg) < eps)
		{
			break;
		}
		y += arg;
	}

	printf("y = e ^ x = %lf \n", y);

	y = x;
	if (fabs(x) > 1)
	{
		printf("y = arctg(x) = inf \n", y);
	}
	else
	{
		for (int i = 1; ; i++)
		{
			double arg = pow(-1, i) * (pow(x, 2 * i + 1) / (2 * i + 1));
			if (fabs(arg) < eps)
			{
				break;
			}
			y += arg;
		}
		printf("y = arctg(x) = %lf \n", y);
	}
	

	printf("\nPress any key...\n");
	getch();
	return 0;
}