#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: integer to print stuff?
 */

void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (n < 0 || n == 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
