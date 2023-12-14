#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

struct student
{
	char surname[30];
	short ITMark;
	short englishMark;
	short mathMark;
};

void printStudentsTable(int studentsAmount, struct student* students)
{
	printf("\n __________________________________________________________________");
	printf("\n|    Фамилия    |  Информатика  |  Английский язык  |  Математика  |");
	printf("\n|---------------|---------------|-------------------|--------------|");
	for (int i = 0; i < studentsAmount; i++)
	{
		if (i != studentsAmount - 1)
		{

			printf("\n|%-15s|%-15d|%-19d|%-14d|", students[i].surname, students[i].ITMark, students[i].englishMark, students[i].mathMark);
			printf("\n|---------------|---------------|-------------------|--------------|");
		}
		else
		{
			printf("\n|%-15s|%-15d|%-19d|%-14d|", students[i].surname, students[i].ITMark, students[i].englishMark, students[i].mathMark);
			printf("\n ------------------------------------------------------------------");
		}
	}

}

void studentsArrayFill(int studentsAmount, struct student* students, FILE* fp)
{
	for (int i = 0; i < studentsAmount; i++)
	{
		fscanf(fp, "%s", &students[i].surname);
		fscanf(fp, "%d", &students[i].ITMark);
		fscanf(fp, "%d", &students[i].englishMark);
		fscanf(fp, "%d", &students[i].mathMark);
	}
}

double* getAverageMarks(int studentsAmount, struct student* students)
{
	double averageMarks[100];
	printf("\n ________________________________");
	printf("\n|    Фамилия    |  Средний балл  |");
	printf("\n|---------------|----------------|");
	for (int i = 0; i < studentsAmount; i++)
	{
		if (i != studentsAmount - 1)
		{
			averageMarks[i] = students[i].ITMark + students[i].englishMark + students[i].mathMark;
			averageMarks[i] /= 3;
			printf("\n|%-15s|%-16.3f|", students[i].surname, averageMarks[i]);
			printf("\n|---------------|----------------|");

		}
		else
		{
			averageMarks[i] = students[i].ITMark + students[i].englishMark + students[i].mathMark;
			averageMarks[i] /= 3;
			printf("\n|%-15s|%-16.3f|", students[i].surname, averageMarks[i]);
			printf("\n --------------------------------");
		}
	}

	return averageMarks;
}

double getMaxMark(int studentsAmount, double averageMarks[], struct student* students)
{
	double max = averageMarks[0];
	int studentId = 0;
	if (studentsAmount > 1)
	{
		for (int i = 1; i < studentsAmount; i++)
		{
			if (averageMarks[i] > max)
			{
				max = averageMarks[i];
				studentId = i;
			}
		}
	}
	printf("\n\n Студент с максимальным средним баллом: ");
	printf("\n Фамилия: %s  Средний балл: %f\n", students[studentId], max);
}

int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	char path[255] = "C:\\test\\students.txt";
	FILE* fp = fopen(path, "r");

	fscanf(fp, "%d", &n);

	struct student students[100];
	studentsArrayFill(n, students, fp);
	printStudentsTable(n, students);
	double* averageMarks = getAverageMarks(n, students);
	double maxMark = getMaxMark(n, averageMarks, students);


	printf("\nНажмите любую клавишу...\n");
	getch();
	return 0;
}