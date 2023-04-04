#include "lists.h"
/**
 * pop_listint - delete the head node
(* a blank line
*@head: the head of list
* Description: this function delete the head note)?
(* section header: the header of this function is lists.h)*
* Return: void, no return
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

temp = *head;

if (temp == NULL)
return (0);

*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
