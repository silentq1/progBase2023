#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ��� �������: ");
	int age = 0;
	scanf("%d", &age);
	if (age == 1 || age == 21)
	{
		printf("��� %d ���.", age);
	}
	else if ((age >= 2 && age <= 4) || (age >= 22 && age <= 24))
	{
		printf("��� %d ����.", age);
	}
	else if (age >= 5 && age <= 20 || age == 25)
	{
		printf("��� %d ���.", age);
	}

	printf("\n������� ����� ������ ����� ����������...\n");
	getch();
	return 0;
}