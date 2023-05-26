#include "main.h"
/**
 * _isdigit - prints digit
 * @c: character to check
 *
 * Return: gives 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
