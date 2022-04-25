#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of elements in the listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
