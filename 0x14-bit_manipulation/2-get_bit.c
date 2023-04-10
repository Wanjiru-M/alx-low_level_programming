#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - functions thhat returns the value of a bit at a given index .
 * @n: number to be scanned.
 * @index: bit to return.
 *
 * Return: Bit (0 | 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	bit_value = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit_value);
}


