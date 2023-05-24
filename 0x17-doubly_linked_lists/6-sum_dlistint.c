#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data in a linked list
 * @list: Pointer to the head of the list
 *
 * Return: The sum of the data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *list)
{
	int sum = 0;

	while (list)
	{
		sum += list->n;
		list = list->next;
	}
	return sum;
}

