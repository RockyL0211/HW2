#include <stdio.h>

int main(void)
{
	int pieces, code;
	float total = 0;
	float pay, sales, hours;

	printf("Enter employee's number code (-1 to end): ");
	scanf_s("%d", &code);

	while (code != -1)
	{
		switch (code)
		{
		case 1:
			printf("Enter the manager's pay rate: ");
			scanf_s("%f", &pay);

			printf("Weekly pay is: %.2f\n\n", pay);

			total += pay;

			break;

		case 2:
			printf("Enter hourly worker's pay rate: ");
			scanf_s("%f", &pay);

			printf("Enter the number of hours worked: ");
			scanf_s("%f", &hours);

			if (hours > 40)
				pay = (pay * 40) + ((hours - 40) * (pay * 1.5));
			else
				pay = pay * hours;

			printf("Weekly pay is: %.2f\n\n", pay);

			total += pay;

			break;

		case 3:
			printf("Enter commission employee's gross weekly sales: ");
			scanf_s("%f", &sales);

			pay = 250 + (.057 * sales);

			printf("Weekly pay is: %.2f\n\n", pay);

			total += pay;

			break;

		case 4:
			printf("\nEnter the number of pieces completed: ");
			scanf_s("%d", &pieces);

			printf("Enter the employee's per piece pay rate: ");
			scanf_s("%f", &pay);

			pay = pieces * pay;

			printf("Weekly pay is: %.2f\n\n", pay);

			total += pay;

			break;

		default:
			printf("You have entered an invalid code.\n");
		}

		printf("\nEnter employee's number code (-1 to end): ");
		scanf_s("%d", &code);
	}

	printf("\nThe total payroll for the week is: %.2f\n", total);

	return 0;
}