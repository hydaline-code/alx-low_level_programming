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

	for (i = 48; i < 58; i++)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(32);
		}
		else
		{
			putchar(57);
		}
	}
	return (0);
}

