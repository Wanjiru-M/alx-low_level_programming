#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		node_count++;

		if (current_node->next == NULL)
		{
			printf("%d\n", current_node->n);
		}
		else
		{
			if (node_count == 1)
				printf("%d", current_node->n);
			else
				printf(" -> %d", current_node->n);
		}

		current_node = current_node->next;
	}

	printf("\n");

	return (node_count);
}

