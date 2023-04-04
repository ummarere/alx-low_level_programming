#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: the pointer to the linked list
 * @n: the integer to add
 * Return: the adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *actual;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		actual = *head;
		while (actual->next)
			actual = actual->next;
		actual->next = node;
	}
	return (node);
}
