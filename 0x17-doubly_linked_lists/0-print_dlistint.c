#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *head)
{
    size_t node_count = 0;
    const dlistint_t *current_node = head;

    while (current_node != NULL)
    {
        node_count++;

        if (current_node->next == NULL)
        {
            printf("%d\n", current_node->n);
        }
        else
        {
            printf("%d -> ", current_node->n);
        }

        current_node = current_node->next;
    }

    return node_count;
}
