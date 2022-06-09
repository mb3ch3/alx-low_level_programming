#include "lists.h"

/**
 * dlistint_len - count node
 * @h: start pointer
 *
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
