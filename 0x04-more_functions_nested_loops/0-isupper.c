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
	if (c >= 'A' && c <= 'Z')
	{
		return (_putchar(49));
	}
	else
	{
		return (_putchar(48));
	}
}
