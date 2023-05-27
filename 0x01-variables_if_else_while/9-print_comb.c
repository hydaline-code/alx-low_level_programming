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

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
			if (i != 9)
			{
				putchar(',');
				putchar(32);
			}
	}
	putchar('$');
	return (0);
}
