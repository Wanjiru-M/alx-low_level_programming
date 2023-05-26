#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        dlistint_t *temp = *head;
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    dlistint_t *current;
    unsigned int i;
    for (current = *head, i = 0; current != NULL && i < index - 1; current = current->next, i++)
    {
    }

    if (current == NULL || current->next == NULL)
        return (-1);

    dlistint_t *temp = current->next;
    current->next = current->next->next;
    if (current->next != NULL)
        current->next->prev = current;
    free(temp);
    return (1);
}
