#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 * Prints the value pairs.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	char *separator = "";
	unsigned long int index;

	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				printf("%s", separator);
				separator = ", ";

				if (node->key != NULL)
					printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
