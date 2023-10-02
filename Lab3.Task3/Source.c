#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Enter N value: ");
	scanf("%d", &n);
	if (n < 2)
	{
		printf("N value should be more than 1 \n");
	}
	else
	{
		for (int i = n; i > 1; i--)
		{
			_Bool isSimple = 0;
			for (int j = i - 1; j >= 1; j--)
			{
				if (i % j == 0 && j != 1)
				{
					break;
				}
				else if (j == 1)
				{
					isSimple = 1;
				}
			}
			if (isSimple)
			{
				printf("%d ", i);
			}
		}
		printf("1 ");
	}


	printf("\nPress any key...\n");
	getch();
	return 0;
}