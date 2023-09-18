#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - puts a string
 *
 * @str: string to print
 */

void print_rev(char* str) {
    int i;

    for (i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}

