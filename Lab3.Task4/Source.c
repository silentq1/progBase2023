#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double eps = 0.01;
	double a, b, h;
	printf("Enter a value: ");
	scanf("%lf", &a);
	printf("Enter b value: ");
	scanf("%lf", &b);
	printf("Enter h value: ");
	scanf("%lf", &h);
	printf("______________________________________________\n");
	printf("   x   |  cos(x)  |  x - 1  |      e ^ x      |\n");
	printf("-------|----------|---------|-----------------|\n");
	for (double i = a; i / eps <= b / eps; i += h)
	{
		if (i / eps < -3 / eps)
		{
			printf("% 7.2lf|  %6.2lf  |    -    |        -        |\n", i, cos(i));
		}
		else if (i / eps >= -3 / eps && i / eps <= 1 / eps)
		{
			printf("% 7.2lf|     -    | %6.2lf  |        -        |\n", i, i - 1);
		}
		else if (i / eps > 1 / eps)
		{
			printf("% 7.2lf|     -    |    -    |   %- 11.1lf   |\n", i, exp(i));
		}
	}
	printf("----------------------------------------------|\n");


	printf("\nPress any key...\n");
	getch();
	return 0;
}