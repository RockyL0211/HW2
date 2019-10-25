#include <stdio.h>

int main()
{
	int c, k, space = 1;

	space = 4;

	for (k = 1; k <= 5; k++)
	{

		for (c = 1; c <= space; c++)
			printf(" ");

		space--;

		for (c = 1; c <= 2 * k - 1; c++)
			printf("*");

		printf("\n");

	}
	space = 1;

	for (k = 1; k <= 5 - 1; k++)
	{

		for (c = 1; c <= space; c++)
			printf(" ");

		space++;

		for (c = 1; c <= 2 * (5 - k) - 1; c++)
			printf("*");

		printf("\n");

	}

	return 0;
}