#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 (Big Endian), 1 (Little Endian)
 */
int get_endianness(void)
{
	unsigned int I = 1;
	char *c = (char *)&I;

	if (*c)
		return (1);

	return (0);
}


