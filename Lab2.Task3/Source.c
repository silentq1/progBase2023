#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Укажите ваш возраст: ");
	int age = 0;
	scanf("%d", &age);
	if (age == 1 || age == 21)
	{
		printf("Вам %d год.", age);
	}
	else if ((age >= 2 && age <= 4) || (age >= 22 && age <= 24))
	{
		printf("Вам %d года.", age);
	}
	else if (age >= 5 && age <= 20 || age == 25)
	{
		printf("Вам %d лет.", age);
	}

	printf("\nНажмите любую кнопку чтобы продолжить...\n");
	getch();
	return 0;
}