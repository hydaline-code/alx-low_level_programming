#include "main.h"

/**
 * print_diagonal - prints diagonal stuff
 *
 * @n: integer to set diagonal
 */

void print_diagonal(int n)
{
	int num;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	} 
	else
	{

		for (num = 0; num < n; num++)
		{
			for (j = 0; j < n; j++)
			{
				if (num == j)
				{
					_putchar('\\');
				}
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
