#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int accnum = 0;
	float beginbalan = 0, totchar = 0, totcred = 0, limit = 0, nbala = 0;

	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &accnum);

		if (accnum == -1)
			break;

		printf("Enter beginning balance: ");
		scanf_s("%f", &beginbalan);
		printf("Enter total charges: ");
		scanf_s("%f", &totchar);
		printf("Enter total credits: ");
		scanf_s("%f", &totcred);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);

		nbala = beginbalan + totchar - totcred;

		if (nbala > limit)
		{
			printf("Account:\t%d\n", accnum);
			printf("Credit limit:\t%.2f\n", limit);
			printf("Balance:\t%.2f\n", nbala);
			printf("Credit limit exceeded.\n");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}