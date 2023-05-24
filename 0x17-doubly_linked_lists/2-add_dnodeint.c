#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t element_count = 0;
	const dlistint_t *current = head;

	while (current != NULL)
	{
		element_count++;
		current = current->next;
	}

	return element_count;
}

