#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float receive, grosssales;

	while (1)
	{
		printf("Enter sales in dollares (-1 to end): ");
		scanf_s("%f", &grosssales);
		if (grosssales == -1)
		{
			break;
		}
		receive = grosssales * .09 + 200;
		printf("Salary is: %.2f\n\n", receive);
	}
	return 0;
}