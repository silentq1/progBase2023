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
	int c = 1;
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
		c++;
	}

	printf("Quantity of elements: %d\n", c);
	printf("y = cos(x) = %lf \n", y);
	printf("(check) y = cos(x) = %lf\n\n", cos(x));

	y = 1;
	c = 1;
	for (int i = 1; ; i++)
	{
		double arg = pow(x, i) / factorial(i);
		if (fabs(arg) < eps)
		{
			break;
		}
		y += arg;
		c++;
	}

	printf("Quantity of elements: %d\n", c);
	printf("(check) y = e ^ x = %lf\n", exp(x));
	printf("y = e ^ x = %lf \n\n", y);

	y = x;
	c = 1;
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
		printf("Quantity of elements: %d\n", c);
		printf("y = arctg(x) = %lf \n", y);
		printf("(check) y =  arctg(x) = %lf\n", atan(x));
	}

	printf("\nPress any key...\n");
	getch();
	return 0;
}