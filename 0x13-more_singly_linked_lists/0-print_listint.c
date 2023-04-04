#include "lists.h"
/**
 * print_listint - print integer
 * @h: the element containing the list
 * Return: the node of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
