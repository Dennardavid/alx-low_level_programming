#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: the function sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary_holder;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary_holder = (*head)->next;
		free(*head);
		*head = temporary_holder;
	}

	head = NULL;
}
