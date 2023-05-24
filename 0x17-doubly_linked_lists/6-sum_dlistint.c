#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of the data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		count++;
		current = current->next;
	}
	return (sum);
}
