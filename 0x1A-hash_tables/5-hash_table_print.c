#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 * Prints the value pairs.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    list_t *list = NULL;
    int flag = 0;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            list = add_node(&list, node->key, node->value);
            node = node->next;
        }
    }

    printf("{");
    while (list != NULL)
    {
        if (flag == 1)
            printf(", ");
        printf("'%s': '%s'", list->key, list->value);
        flag = 1;
        list = list->next;
    }
    printf("}\n");
}
