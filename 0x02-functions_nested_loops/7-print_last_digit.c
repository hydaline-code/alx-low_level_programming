#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	int l;

	l = abs(n % 10);
	_putchar(48 + l);
	return (l);
}
