#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� �������������� �����: ");
	int number = 0;
	scanf("%d", &number);
	if (number / 1000 == 0 || number / 1000 > 9)
	{
		printf("������� �� �������������� �����\n");
		
	}
	else
	{
		int fourth_digit = number / 1000;
		int third_digit = (number % 1000) / 100;
		int second_digit = (number % 100) / 10;
		int first_digit = number % 10;
		if (fourth_digit + third_digit == second_digit + first_digit)
		{
			printf("����� ������ ���� ���� ����� ����� ����� ��������� ���� ���� �����.\n");
		}
		else
		{
			printf("����� ������ ���� ���� ����� �� ����� ����� ��������� ���� ���� �����.\n");
		}
	}

	printf("\n������� ����� ������ ����� ����������...\n");
	getch();
	return 0;
}