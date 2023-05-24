#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @list: Pointer to the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *list)
{
	dlistint_t *current = list;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

