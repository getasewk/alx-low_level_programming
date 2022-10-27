#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	size_t_number_of_nodes;
	
	number_of_nodes=0;
	while(h !=NULL)
	{
		h=h->next;
		number_of_nodes++;
	}
	return (number_of_nodes;);
}
