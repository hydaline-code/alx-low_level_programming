#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	for (n = 10; n < 16; n++)
	{
		putchar(87 + n);
	}
	putchar('\n');
	return (0);
}
