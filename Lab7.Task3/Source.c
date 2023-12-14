#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>


struct rational
{
	int a;
	int b;
};

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

struct rational add(struct rational a, struct rational b) {
	struct rational result;
	result.a = a.a * b.b + a.b * b.a;
	result.b = a.b * b.b;
	int common = gcd(result.a, result.b);
	result.a /= common;
	result.b /= common;
	return result;
}

struct rational subtract(struct rational a, struct rational b) {
	struct rational result;
	result.a = a.a * b.b - a.b * b.a;
	result.b = a.b * b.b;
	int common = gcd(result.a, result.b);
	result.a /= common;
	result.b /= common;
	return result;
}

struct rational multiply(struct rational a, struct rational b) {
	struct rational result;
	result.a = a.a * b.a;
	result.b = a.b * b.b;
	int common = gcd(result.a, result.b);
	result.a /= common;
	result.b /= common;
	return result;
}

struct rational divide(struct rational a, struct rational b) {
	struct rational result;
	result.a = a.a * b.b;
	result.b = a.b * b.a;
	int common = gcd(result.a, result.b);
	result.a /= common;
	result.b /= common;
	return result;
}


int main()
{
	char* locale = setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct rational first = { 2, 3 };
	struct rational second = { 1, 2 };

	printf("Первое число: %d/%d", first.a, first.b);
	printf("\nВторое число: %d/%d", second.a, second.b);
	struct rational sum = add(first, second);
	printf("\nСумма: %d/%d", sum.a, sum.b);
	struct rational subtraction = subtract(first, second);
	printf("\nРазность: %d/%d", subtraction.a, subtraction.b);
	struct rational division = divide(first, second);
	printf("\nЧастное: %d/%d", division.a, division.b);
	struct rational composition = multiply(first, second);
	printf("\nПроизведение: %d/%d", composition.a, composition.b);



	printf("\nНажмите любую клавишу...\n");
	getch();
	return 0;
}