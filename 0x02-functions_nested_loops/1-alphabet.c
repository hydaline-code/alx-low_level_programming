#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 * Return: Always returns 0
 *
 */
void print_alphabet(void)
{	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}
