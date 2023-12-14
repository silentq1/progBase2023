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


	printf("Введите название файла для четных чисел: ");

	scanf("%s", &filename);

	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);

	FILE* evenFp = fopen(path, "r");

	printf("Введите название файла для нечетных чисел: ");

	scanf("%s", &filename);

	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);

	FILE* oddFp = fopen(path, "r");

	int numbersCounter = filelength(_fileno(fp)) / sizeof(int);

	char evenNumbersString[256] = "\0";
	char oddNumbersString[256] = "\0";

	if (evenFp)
	{
		while ((fgets(evenNumbersString, sizeof(int), evenFp)) != NULL)
		{
			printf("%s.", evenNumbersString);
		}
	}

	fclose(evenFp);
	fclose(oddFp);
	fclose(fp);

	printf("\nНажмите любую клавишу...\n");
	getch();
	return 0;
}