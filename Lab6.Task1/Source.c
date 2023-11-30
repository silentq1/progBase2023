#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите название файла: ");
	char filename[255];
	char c;
	scanf("%s", &filename);

	FILE * fp =  fopen(filename, "r");
	if (fp)
	{
		while ((c = getc(fp)) != EOF)
		{
			printf("%c", c);
		}

		fclose(fp);
	}
	else
	{
		printf("\nУказанный файл не существует.\n");
	}

	printf("\nНажмите любую клавишу...\n");
	getch();
	return 0;
}