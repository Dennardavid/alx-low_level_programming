#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t elementCount = 0;
	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n";
		else
			printf("[%lu] %s\n", (unsigned long) h->len, h->str);
			h =h->next;
	}
	
	return (elementCount);
}
