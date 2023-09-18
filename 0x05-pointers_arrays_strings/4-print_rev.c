#include "main.h"
#include <stdio.h>

/**
 * _puts - puts a string
 *
 * @str: string to print
 */

void _puts(char* str) {
    int i;

    for (i = _strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}
