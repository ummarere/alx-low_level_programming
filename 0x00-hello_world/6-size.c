#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'sizes of variables'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long y;
	float z;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(W));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
