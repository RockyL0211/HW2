#include<stdio.h>

int main(void)
{
	float rate, a, b, c, d;

	for (rate = 10; rate <= 12; rate += .5)
	{
		c = 1;
		printf("%.1f\t", rate);

		a = 1 + rate / 100;
		for (b = 1; b <= 15; b++)
			c = c * a;
		d = 5000 * c;
		printf("%.2f\n", d);
	}
	return 0;
}