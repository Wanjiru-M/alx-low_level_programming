/**
 * hash_djb2 - Generate a hash value using the djb2 algorithm
 * @str: String used to generate the hash value
 *
 * function implements djb2 algo to generate a hash value for a string
 *
 * Return: The generated hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value = 5381;
	int character;

	while ((character = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + character;
	}

	return (hash_value);
}
