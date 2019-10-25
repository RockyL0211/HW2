#include<stdio.h>

int b()
{
	int num1, num2;

	printf("(B)\n");

	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num2 = 10; num2 >= num1; num2--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}