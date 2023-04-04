#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_pointer, *fast_pointer;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_pointer = head->next;
	fast_pointer = (head->next)->next;

	while (fast_pointer)
	{
		if (fast_pointer == slow_pointer)
		{
			slow_pointer = head;

			while (fast_pointer != slow_pointer)
			{
				slow_pointer = slow_pointer->next;
				fast_pointer= fast_pointer->next;
			}

			return (slow_pointer);
		}

		slow_pointer = slow_pointer->next;
		fast_pointer = (fast_pointer->next)->next;
	}

	return (NULL);
}
