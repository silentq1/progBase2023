#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
	int A[3][3];
	int B[3][3];
	int AB[3][3];
	printf("The A matrix: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = (rand() % 40) - 20;
			printf("% 3d ", A[i][j]);
			B[i][j] = (rand() % 40) - 20;
			AB[i][j] = 0;
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				AB[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	printf("Composition of A and B: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ", A[i][j]);
		}

		if (i == 1)
		{
			printf("   *   ");
		}
		else
		{
			printf("       ");
		}


		for (int j = 0; j < 3; j++)
		{
			printf("% 3d ",B[i][j]);
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
			printf("% 4d ", AB[i][j]);
		}

		printf("\n");
	}


	printf("\nPress any key...\n");
	getch();
	return 0;
}