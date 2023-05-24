#include "lists.h"
/**
  * *get_dnodeint_at_index - reeturn the nth node of a doubly,
  * linked list
  * @head: pointer to a doubly linked list
  * @index: position of node to be retrived
  * Return: linked list node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
