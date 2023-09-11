#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите четырехзначное число: ");
	int number = 0;
	scanf("%d", &number);
	if (number / 1000 == 0 || number / 1000 > 9)
	{
		printf("Введено не четырехзначное число\n");

	}
	else
	{
		int digits[4];
		digits[3] = number / 1000;
		digits[2] = (number % 1000) / 100;
		digits[1] = (number % 100) / 10;
		digits[0] = number % 10;
		int totalEven = 0;
		int totalOdd = 0;
		printf("Четные числа: ");
		for (int i = 3; i >= 0; i--)
		{
			if (digits[i] % 2 == 0)
			{
				totalEven++;
				printf(" %d ", digits[i]);
			}
		}
		printf(" Общее количество четных цифр: %d \n", totalEven);

		printf("Нечетные числа: ");
		for (int i = 3; i >= 0; i--)
		{
			if (digits[i] % 2 != 0)
			{
				printf(" %d ", digits[i]);
				totalOdd++;
			}
		}
		printf(" Общее количество нечетных цифр: %d \n", totalOdd);

		printf("Введите цифру от 0 до 9: ");
		int searchNumber = 0;
		scanf("%d", &searchNumber);
		if (searchNumber < 0 || searchNumber > 9)
		{
			printf("Введена некорректная цифра.\n");
		}
		else
		{
			int digitFrequency = 0;
			for (int i = 0; i < 4; i++)
			{
				if (digits[i] == searchNumber)
				{
					digitFrequency++;
				}
			}
			printf("Колличество совпадений с указаным числом равно: %d\n", digitFrequency);
		}

	}

	printf("\nНажмите любую кнопку чтобы продолжить...\n");
	getch();
	return 0;
}