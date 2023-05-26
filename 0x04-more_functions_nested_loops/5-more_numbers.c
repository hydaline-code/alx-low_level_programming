#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar ((i / 10) + '0');
			}
				_putchar ((i % 10) + '0');
		}
		_putchar('\n');
	}
}
