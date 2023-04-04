#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *actual;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == '\0')
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	actual = *head;

	for (i = 0; actual; i++)
	{
		if (i == idx - 1)
		{
			node->next = actual->next;
			actual->next = node;
			return (node);
		}
		actual = actual->next;
	}
	free(node);
	return (NULL);
