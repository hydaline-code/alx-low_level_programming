#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char letter;
	char letter_U;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter_U = 'A'; letter_U <= 'z'; letter_U++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
