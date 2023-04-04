#include "lists.h"
#include <stdio.h>

size_t looped_listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_length(const listint_t *head)
{
	const listint_t *dennar, *david;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dennar = head->next;
	david = (head->next)->next;

	while (david)
	{
		if (dennar == david)
		{
			dennar = head;
			while (dennar != david)
			{
				node++;
				dennar = dennar->next;
				david = david->next;
			}

			dennar = dennar->next;
			while (dennar != david)
			{
				node++;
				dennar = dennar->next;
			}

			return (node);
		}

		dennar = dennar->next;
		david = (david->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_num, index = 0;

	node_num = looped_listint_len(head);

	if (node_num == 0)
	{
		for (; head != NULL; node_num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node_num; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_num);
}
