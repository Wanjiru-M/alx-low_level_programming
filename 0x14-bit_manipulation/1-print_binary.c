#include "main.h"
#include <stdio.h>

/**
 * print_binary - printts binary representation of a no
 * @n: no to convert into binary
 */
void print_binary(unsigned long int n)
{
unsigned long int bit_mask = 1;
while (bit_mask < n)
bit_mask = (bit_mask << 1) | 1;

while (bit_mask > 0)
{
if (n & bit_mask)
_putchar('1');
else
_putchar('0');

bit_mask >>= 1;
}
}

