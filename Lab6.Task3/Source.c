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


	printf("������� �������� ����� ��� ������ �����: ");

	scanf("%s", &filename);

	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);

	FILE* evenFp = fopen(path, "w");

	printf("������� �������� ����� ��� �������� �����: ");

	scanf("%s", &filename);

	path[0] = '\0';

	strcat(path, basePath);
	strcat(path, filename);

	FILE* oddFp = fopen(path, "w");

	int numbersCounter = filelength(_fileno(fp)) / sizeof(int);
	
	int allNumbers[200];

	

	fread(&allNumbers, sizeof(int), numbersCounter, fp);

	for (int i = 0; i < numbersCounter; i++)
	{
		char message[12];
		sprintf(message, "%d ", allNumbers[i]);
		if (allNumbers[i] % 2 == 0)
			fprintf(evenFp, "%s", message);
		else
			fprintf(oddFp, "%s", message);
	}

	fclose(evenFp);
	fclose(oddFp);
	fclose(fp);

	printf("\n������� ����� �������...\n");
	getch();
	return 0;
}