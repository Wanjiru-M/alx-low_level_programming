#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * function calculates the index the pair should be stored
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = 0;

	while (hash_value > size - 1)
	{
		index = hash_value % size;
		hash_value = index;
	}

	return (index);
}
