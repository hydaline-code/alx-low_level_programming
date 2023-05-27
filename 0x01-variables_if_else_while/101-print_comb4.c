#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int n;
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (n = 1; n < 10; n++)
		{
			for (j = 2; j < 11; j++)
			{
				if (i + j <= 57 && i + n <= 57)
				{
					if (n != j && n < j)
					{
						putchar(i);
						putchar(i + n);
						putchar(i + j);
					if (i != 55)
					{
						putchar(',');
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

