#include<stdio.h>

int main(void)
{
	int a, b, c, t1, t2, t3;

	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				t1 = a * a;
				t2 = b * b;
				t3 = c * c;
				if (b > c)
				{
					if (t1 == (t2 + t3))
					{
						printf("%d\t%d\t%d\n", a, b, c);
					}
				}
			}
		}
	}
	return 0;
}