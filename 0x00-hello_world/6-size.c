#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Size is not grandeur and territory does not make a ntn'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u;
	int v;
	long int x;
       	long long y;
	float z;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
