#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two pointers
 *
 * @a: the first pointer
 * @b: the second pointer
 */

void swap_int(int *a, int *b)
{
	int first = *a;
	*a = *b;
	*b = first;
}
