#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char basePath[255] = "C:\\test\\";
	char filename[255] = "data.bin";

	char path[255];
	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);
	printf("%s", path);
	FILE* fp = fopen(path, "r");

	int numbersCounter = filelength(_fileno(fp)) / sizeof(int);

	int allNumbers[200];

	fread(&allNumbers, sizeof(int), numbersCounter, fp);
	printf("\nКоличество элементов: %d", numbersCounter);
	int sum = 0;
	for (int i = 0; i < numbersCounter; i++)
	{
		sum += allNumbers[i];
	}

	double average = sum / numbersCounter;
	printf("\nСумма элементов: %d", sum);
	printf("\nСреднее арифметическое элементов: %.2lf", average);

	fclose(fp);

	printf("\nНажмите любую клавишу...\n");
	getch();
	return 0;
}