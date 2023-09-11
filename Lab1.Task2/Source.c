#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int day;
	int month;
	int year;
	char weekDay[80];
	double doubleNumber;
	char groupNumber[20];
	char surname[50];

	printf("***** ВВОД ДАННЫХ *****\n");
	printf("Введите день: ");
	scanf("%d", &day);

	printf("Введите месяц: ");
	scanf("%d", &month);

	printf("Введите год: ");
	scanf("%d", &year);

	printf("Введите день недели: ");
	scanf("%s", weekDay);

	printf("Введите вещественное число: ");
	scanf("%lf", &doubleNumber);

	printf("Введите номер группы: ");
	scanf("%s", groupNumber);

	printf("Введите фамилию: ");
	scanf("%s", surname);

	printf("\n***** ВЫВОД ДАННЫХ *****\n");
	printf("Лабораторная работа №1\n");
	printf("Сегодня: %0.2d / %0.2d / %0.4d, %s \n", day, month, year, weekDay);
	printf("x = %.2f\n", doubleNumber);
	printf("sin(x) = sin(%f) =  %f\n", doubleNumber, sin(doubleNumber));
	printf("cos(x) = cos(%f) =  %f\n", doubleNumber, cos(doubleNumber));
	printf("Работу выполнил: студент %s группы, %s \n", groupNumber, surname);

	printf("\nДля продолжения нажмите любую клавишу...");
	getch();
	return 0;
}