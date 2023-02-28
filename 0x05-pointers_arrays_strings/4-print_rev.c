#include "main.h"

/**
 * print_rev - this function prints strings in reverse
 *
 * @s: the string to be printed in reverse order
 *
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
