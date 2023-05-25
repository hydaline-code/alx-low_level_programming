#include "main.h"
#include <ctype.h>
/**
 * _islower - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	char c;

	if (islower(c))
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
	_putchar('\n');
}
