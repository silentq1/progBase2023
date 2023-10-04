#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int averageArrayItem(int arr[100], int n)
{
	int average = 0;
	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}

	average /= n;
}

int maxArrayItem(int arr[100], int n)
{
	int max = arr[0];
	{
		for (int i = 1; i < n; i++)
		{
			max = arr[i] > max ? arr[i] : max;
		}
	}
	return max;
}

int minArrayItem(int arr[100], int n)
{
	int min = arr[0];
	{
		for (int i = 1; i < n; i++)
		{
			min = arr[i] < min ? arr[i] : min;
		}
	}
	return min;
}

void outputEveryFunction(int arr[100], int n)
{
	printf("\n�������� ������\n");
	printf("-----------------------------------------------------------\n");
	for (int i = 0; i < n; i += 4)
	{
		for (int j = i; j < i + 4 && j < n; j++)
		{
			printf("A[%2d]=%-4d ", j + 1 ,arr[j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------------------------\n");

	printf("������� �������������� = %d\n", averageArrayItem(arr, n));
	printf("����������� �������� = %d\n", minArrayItem(arr, n));
	printf("������������ �������� = %d\n", maxArrayItem(arr, n));
}

void arrayFillDialog(int *arr, int *n)
{
	for (int i = 0; i < n; i++)
	{
		printf("����� %2d=", i + 1);
		int number;
		scanf("%d", &number);
		while (fabs(number) > 9999)
		{
			printf("��������� ����� ��������� 9999 ��� ������ 9999. ������� ������ �����.\n");
			printf("����� %2d=", i + 1);
			int number;
			scanf("%d", &number);
		}
		arr[i] = number;
	}

	printf("\n���� ��������! ��� ����������� ������� ENTER\n");
	getch();
}

int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	printf("������� ���������� ����� ����� N = ");
	scanf("%d", &n);
	int arr[100];
	arrayFillDialog(arr, n);
	outputEveryFunction(arr, n);

	printf("\n������� ����� �������...\n");
	getch();
	return 0;
}