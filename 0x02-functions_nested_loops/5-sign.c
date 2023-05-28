#include "main.h"
/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(49);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('/');
		_putchar('\n');
	}
	return (0);
}
