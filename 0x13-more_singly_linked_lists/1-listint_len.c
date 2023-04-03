#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	 size_t number_of_nodes = 0;

	 while (h)
	 {
		 number_of_nodes++;
		 h = h->next;
	 }

 return (number_of_nodes);
}

