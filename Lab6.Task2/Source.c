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


	printf("������� ����: ");
	char filename[255];
	char c;
	scanf("%s", &filename);
	strcat(filename, "\\data.bin");

	printf("������� �������� �������(��������� ������� 0): ");
	int newarr[100];

	FILE* fp = fopen(filename, "w");
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &newarr[i]);

		fwrite(&newarr[i], sizeof(int), 1, fp);

		if (newarr[i] == 0)
			break;
	}


	fclose(fp);

	printf("\n������� ����� �������...\n");
	getch();
	return 0;
}