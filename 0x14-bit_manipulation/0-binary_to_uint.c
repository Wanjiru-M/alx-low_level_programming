#include "main.h"

/**
 * binary_to_uint - functionz that convert a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int no, j;

	if (!b || !*b)
		return (0);

	no = j = 0;
	while (b[j])
	{
		if (b[j] > 49)
			return (0);
		else if (b[j] == 49)
		{
			no <<= 1;
			no += 1;
		}
		else
			no <<= 1;
		j++;
	}
	return (no);
}


