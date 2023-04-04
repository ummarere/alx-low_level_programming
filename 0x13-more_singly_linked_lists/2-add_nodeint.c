#include "lists.h"
/**
 * add_nodeint- add new node to linked list
 * @head: the head
 * @n: the neww added element
 * Return: the new added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
