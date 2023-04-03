#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
    size_t number_of_nodes = 0;
    
    for (const listint_t *current = h; current != NULL; current = current->next) {
        number_of_nodes++;
    }
    
    return number_of_nodes;
}
