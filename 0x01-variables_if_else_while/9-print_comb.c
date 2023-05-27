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

	for (i = 48; i <= 58; i++)
	{
		if (i < 58)
		{
			putchar(i);
			putchar(',');
			putchar(32);
		}
		else
		{
			
		}
	}
	return (0);
}

