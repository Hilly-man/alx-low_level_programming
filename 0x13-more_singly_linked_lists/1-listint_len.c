#include "lists.h"

/**
 * listint_len - returns number of elements in linked lists
 * @h: linked list of type listint_t to pass over
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	for (; h != NULL; h = h->next)
	{
		num_nodes++;
	}

	return (num_nodes);
}
