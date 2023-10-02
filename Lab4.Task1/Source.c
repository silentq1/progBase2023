#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int arr[50];
	int lastElementIndex = 0;
	int average = 0;
	printf("Enter the values of array: ");
	for (int i = 0; i < 50; i++)
	{
		scanf("%d", &arr[i]);
		average += arr[i];
		if (arr[i] == 0)
		{
			lastElementIndex = i;
			break;
		}
	}
	
	average /= lastElementIndex + 1;

	for (int i = 0; i <= lastElementIndex; i++)
	{
		printf("%d element: %d\n", i + 1, arr[i]);
	}

	int lastElementIndexCopy = lastElementIndex;
	for (;lastElementIndexCopy >= 0; lastElementIndexCopy--)
	{
		for (int j = 0; j < lastElementIndexCopy; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}	
	}
	printf("\n Sorted array: \n");

	for (int i = 0; i <= lastElementIndex; i++)
	{
		printf("%d element: %d\n", i + 1, arr[i]);
	}

	printf("Average array item is: %d\n", average);
	printf("Minimum array value is: %d\n", arr[0]);
	printf("Maximum array value is: %d\n", arr[lastElementIndex]);
	printf("\nPress any key...\n");
	getch();
	return 0;
}