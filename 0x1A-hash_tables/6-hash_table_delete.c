#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 * 
 * Description: This function frees the memory allocated for a hash table,
 * including the keys and values of the hash nodes.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *node, *tmp;
    unsigned long int i;
    hash_table_t *head = ht;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];

        while (node != NULL)
        {
            tmp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = tmp;
        }
    }

    free(head->array);
    free(head);
}
