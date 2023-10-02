#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int num = rand() % 10;
	int guess;
	for (int i = 5; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("No more tries left. Predicted number was: %d\n", num);
		}
		else
		{
			if (i == 1)
			{
				printf("1 try remaining. Guess the value: ");
			}
			else
			{
				printf("%d tries remaining. Guess the value: ", i);
			}
			scanf("%d", &guess);
			if (guess > num)
			{
				printf("Less\n");
			}
			else if (guess < num)
			{
				printf("More\n");
			}
			else
			{
				printf("You're right. Predicted number is %d\n", guess);
				break;
			}
		}
	}
	
	printf("\nPress any key...\n");
	getch();
	return 0;
}