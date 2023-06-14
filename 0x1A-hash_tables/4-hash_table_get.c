#include "hash_tables.h"
#include "string.h"

/**
 * hash_table_get - Retrieves a value associated with a key from a hash table.
 * @ht: The hash table to look into.
 * @key: The key being looked for.
 *
 * Return: The value associated with the element, or NULL if the key
 * couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	 unsigned long int index;
	unsigned long int original_index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	original_index = index;
	tmp = ht->array[index];

	while (tmp != NULL)
	{
	if (strcmp(tmp->key, key) == 0)
	return (tmp->value);

	 index = (index + 1) % ht->size;
		if (index == original_index)
		break;

	tmp = ht->array[index];
	}

	return (NULL);
}
