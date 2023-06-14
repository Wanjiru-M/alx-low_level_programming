#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void free_nodes(hash_node_t *node)
{
    if (node == NULL)
        return;

    free_nodes(node->next);
    free(node->key);
    free(node->value);
    free(node);
}

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        free_nodes(ht->array[i]);
    }

    free(ht->array);
    free(ht);
}

