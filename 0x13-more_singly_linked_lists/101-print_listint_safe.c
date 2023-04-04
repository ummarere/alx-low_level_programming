#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
size_t print_listint_safe(const listint_t *head)
{
	int difference, i, number;
	void *address;

	i = 0;

	while (head != NULL)
	{
		difference = head - head->next;
		i++;
		number = head->n;
		printf("[%p] %i\n", (void *)head, number);
		if (difference > 0)
			head = head->next;
		else
		{
			address = head->next;
			number = head->next->n;
			printf("-> [%p] %i\n", address, number);
			break;
		}

	}
	return (i);
}
