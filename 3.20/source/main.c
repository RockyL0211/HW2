#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int time;
	float salary;

	while (1)
	{
		printf("Enter # of houres worked (-1 to end): ");
		scanf_s("%d", &time);
		if (time == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &salary);

		if (time <= 40)
		{
			salary = time * salary;
		}
		else
		{
			salary = 40 * salary + (time - 40) * salary * 1.5;
		}

		printf("Salary is $%.2f\n\n", salary);
	}
	return 0;
}