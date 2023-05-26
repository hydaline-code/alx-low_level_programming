#include "main.h"
#include <ctype.h>
/**
 * _isupper - determine if uppercase
 *
 * @c: character to determine
 *
 * Return: gives boolean
 */

int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
	{
		if (_isupper(c))
		{
			_putchar(49);
		}
		else
		{
			_putchar(48);
		}
	}
}
