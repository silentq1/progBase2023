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

	printf("Введите название файла: ");

	char basePath[255] = "C:\\test\\";
	char filename[255];
	scanf("%s", &filename);

	char path[255];
	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);
	printf("%s", path);
	FILE* fp = fopen(path, "r");


	printf("Введите путь к файлу для четных чисел: ");

	scanf("%s", &filename);

	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);
	printf("%s", path);

	FILE* evenFp = fopen(path, "w");

	printf("Введите путь к файлу для нечетных чисел: ");

	scanf("%s", &filename);

	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);
	printf("%s", path);

	FILE* oddFp = fopen(path, "w");

	int even[100];
	int odd[100];

	char num[10];
	num[0] = '\0';

	char* numsArray = "";
	int numsArraySize = 0;

	while (!feof(fp)) 
	{
		fscanf(fp, "%c", &numsArray[numsArraySize]);
		numsArraySize++;
	}


	for (int i = 0; i <= numsArraySize; i++)
	{
		char c = numsArray[i];
		if (c == " ")
		{
			int number = atoi(num);
			if (number % 2 == 0)
				fputs(number + ' ', evenFp);
			else
				fputs(number + ' ', oddFp);

			num[0] = '\0';
		}
		else
		{
			strcat(num, 1);
			printf(num);
		}
	}



	/*printf("Введите элементы массива(последний элемент 0): ");
	int newarr[100];
	FILE* fp = fopen(filename, "w");
	for (int i = 0; i < 100; i++)
	{
		char num[10];
		scanf("%d", &newarr[i]);
		_itoa(newarr[i], num, 10);
		printf("%s ", num);
		fputs(num, fp);

		if (newarr[i] == 0)
			break;

		fputs(" ", fp);
	}*/

	fclose(evenFp);
	fclose(oddFp);
	fclose(fp);

	printf("\nНажмите любую клавишу...\n");
	getch();
	return 0;
}