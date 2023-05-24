#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}
