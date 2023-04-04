#include "lists.h"
/**
 * listint_len - count the number of elements
(* a blank line
*@h: the list
* Description: count the number of elements)?
(* section header: the header of this function is lists.h)*
* Return: this return the num of the elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num + 1);
}
