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

	printf("***** ���� ������ *****\n");
	printf("������� ����: ");
	scanf("%d", &day);

	printf("������� �����: ");
	scanf("%d", &month);

	printf("������� ���: ");
	scanf("%d", &year);

	printf("������� ���� ������: ");
	scanf("%s", weekDay);

	printf("������� ������������ �����: ");
	scanf("%lf", &doubleNumber);

	printf("������� ����� ������: ");
	scanf("%s", groupNumber);

	printf("������� �������: ");
	scanf("%s", surname);

	printf("\n***** ����� ������ *****\n");
	printf("������������ ������ �1\n");
	printf("�������: %0.2d / %0.2d / %0.4d, %s \n", day, month, year, weekDay);
	printf("x = %.2f\n", doubleNumber);
	printf("sin(x) = sin(%f) =  %f\n", doubleNumber, sin(doubleNumber));
	printf("cos(x) = cos(%f) =  %f\n", doubleNumber, cos(doubleNumber));
	printf("������ ��������: ������� %s ������, %s \n", groupNumber, surname);

	printf("\n��� ����������� ������� ����� �������...");
	getch();
	return 0;
}