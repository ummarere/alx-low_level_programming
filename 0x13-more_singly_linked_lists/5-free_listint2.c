#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: free head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *position, *actual;

	if (head == NULL)
		return;

	actual = *head;
	while (actual != NULL)
	{
		position = actual;
		actual = position->next;
		free(position);
	}
	*head = '\0';
	head = '\0';
}
