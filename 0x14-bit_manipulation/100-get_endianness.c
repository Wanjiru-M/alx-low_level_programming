#include "main.h"
/**
 * get_endianness - function that checks the endianness of machine.
 *
 * Return: 0 (Big Endian), 1 (Little Endian)
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *d = (char *)&j;

	if (*d)
		return (1);

	return (0);
}


