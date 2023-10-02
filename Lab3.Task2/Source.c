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
		int f = 1;
		int fprev = 0;
		for (int i = 2; i <= n; i++)
		{
			int fcopy = f;
			f += fprev;
			fprev = fcopy;
		}
		printf("F %d = %d", n, f);
	}
	

	printf("\nPress any key...\n");
	getch();
	return 0;
}