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
		return (1);
	}
	else
	{
		return (0);
	}
}
