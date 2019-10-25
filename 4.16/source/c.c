#include<stdio.h>

int c()
{
	int num1, num2, num3;

	printf("(C)\n");

	for (num1 = 1; num1 <= 10; num1++)
	{
		if (num1 != 1)
		{
			for (num3 = 1; num3 <= num1 - 1; num3++)
			{
				printf(" ");
			}
		}
		for (num2 = 10; num2 >= num1; num2--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}