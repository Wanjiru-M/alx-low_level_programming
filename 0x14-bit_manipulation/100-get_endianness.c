#include "main.h"
/**
 * get_endianness - checks the endianness of the machine.
 *
 * Return: returns 0 if the machine is big endian, and 1 if it is little endian
 */
int get_endianness(void)
{
	unsigned int no = 1;
	char *pt = (char *)&I;

	if (*pt)
		return (1);

	return (0);
}


