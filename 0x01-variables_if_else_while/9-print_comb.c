#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(48 + i);

			if (i !=  9)
			{
				putchar(',');
				putchar(32);
			}
	}
	i++
	return (0);
}

