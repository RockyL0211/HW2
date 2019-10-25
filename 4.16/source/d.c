#include<stdio.h>

int d()
{
	int num1, num2, num3;

	printf("(D)\n");

	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num3 = 9; num3 >= num1; num3--)
		{
			printf(" ");
		}
		for (num2 = 1; num2 <= num1; num2++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}