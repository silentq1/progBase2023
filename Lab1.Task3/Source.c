#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <locale.h>
double getRadians(double degrees)
{
	return degrees * (M_PI / 180);
}
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("  ÒÀÁËÈÖÀ ÇÍÀ×ÅÍÈÉ ÒĞÈÃÎÍÎÌÅÒĞÈ×ÅÑÊÈÕ ÔÓÍÊÖÈÉ  \n \n");
	printf("    |   0    30    60    90   120   150   180 \n");
	printf("----------------------------------------------\n");
	printf("sin |");
	for (int i = 0; i <= 180; i+=30)
	{
		printf(" %.2f ", sin(getRadians(i)));
	}
	printf("\n");

	printf("cos |");
	for (int i = 0; i <= 180; i += 30)
	{
		
		double result = cos(getRadians(i));
		if (result >= 0)
		{
			printf(" %.2f ", result);
		}
		else
		{
			printf("%.2f ", result);
		}
	}
	printf("\n");

	printf(" tg |");
	for (int i = 0; i <= 180; i += 30)
	{
		if (i == 90)
		{
			printf("  inf ");
		}
		else
		{
			double result = tan(getRadians(i));
			if (result >= 0)
			{
				printf(" %.2f ", result);
			}
			else
			{
				printf("%.2f ", result);
			}
			
		}
	}
	printf("\n");

	printf("ñtg |");
	for (int i = 0; i <= 180; i += 30)
	{
		if (i == 0 || i == 180)
		{
			printf("  inf ");
		}
		else
		{
			double result = cos(getRadians(i)) / sin(getRadians(i));
			if (result >= 0)
			{
				printf(" %.2f ", result);
			}
			else
			{
				printf("%.2f ", result);
			}
		}
	}
	printf("\n");

	printf("\nÄëÿ ïğîäîëæåíèÿ íàæìèòå ëşáóş êëàâèøó...");
	getch();
	return 0;
}