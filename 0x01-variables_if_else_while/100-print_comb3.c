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

	for (i = 48; i < 57; i++)
	{
		for (n = 1; n < 10; n++)
		{
			if (i + n <= 57)
			{
				putchar(i);
				putchar(i + n);

				if (i != 56)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
