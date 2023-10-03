#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
	int A[3][3];
	int B[3][3];
	int transposedB[3][3];
	int C[3][3];
	int zeroesC[3][3];
	printf("The A matrix: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = (rand() % 40) - 20;
			printf("% 3d ", A[i][j]);
			B[i][j] = (rand() % 40) - 20;
		}
		printf("\n");
	}

	printf("The B matrix: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ", B[i][j]);
		}
		printf("\n");
	}

	printf("The transposed B matrix: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ", B[j][i]);
			transposedB[i][j] = B[j][i];
		}
		printf("\n");
	}
	
	printf("The sum of A matrix and transposed B matrix: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ", A[i][j]);
		}

		if (i == 1)
		{
			printf("   +   ");
		}
		else
		{
			printf("       ");
		}


		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ", transposedB[i][j]);
		}

		if (i == 1)
		{
			printf("   =   ");
		}
		else
		{
			printf("       ");
		}

		for (int j = 0; j < 3; j++)
		{
			C[i][j] = transposedB[i][j] + A[i][j];
			zeroesC[i][j] = C[i][j] < 0 ? 0 : C[i][j];
			printf("% 3d ", C[i][j]);
		}

		printf("\n");
	}

	printf("The C matrix with negative numbers changed to zero: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ", zeroesC[i][j]);
		}
		printf("\n");
	}


	printf("\nPress any key...\n");
	getch();
	return 0;
}