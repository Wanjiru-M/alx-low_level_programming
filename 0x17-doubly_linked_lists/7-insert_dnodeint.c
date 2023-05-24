#include "lists.h"
/**
  * insert_dnodeint_at_index - function inserts a new node at,
  * a given position
  * @h: pointer to the list
  * @idx: index
  * @n: data to be added
  * Return: new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int i;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
	}
	else
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		new->prev = current;
		new->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = new;
		}
		current->next = new;
	}
	return (new);
}
