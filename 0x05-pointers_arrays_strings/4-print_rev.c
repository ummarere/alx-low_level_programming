#include "main.h"
#include <stdio.h>

/**
 * print_rev - Afunction that prints a string, followed by a new line
 * @s: Function parameter
 *  Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0, i;

	/* Find the length of the string */
	while (s[len] != '\0')
		len++;

	/* Print the string in reverse order */
	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

	/* Print a new line at the end */
	putchar('\n');
}
