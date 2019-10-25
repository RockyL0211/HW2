#include<stdio.h>

int a()
{
	int num1, num2;

	printf("(A)\n");
	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num2 = 1; num2 <= num1; num2++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}