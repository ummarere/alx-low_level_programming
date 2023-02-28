#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be written in reverse order
 */

void print_rev(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
