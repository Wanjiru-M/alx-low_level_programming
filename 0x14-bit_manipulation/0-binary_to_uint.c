#include "main.h"
/**
 * binary_to_uint -  function that convertz  binary number to an unsigned int
 * @b: string that contains the binary number
 *
 * Return: converted number, or 0 if there is an invalid character in string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
switch (b[i])
{
case '0':
num <<= 1;
break;
case '1':
num <<= 1;
num |= 1;
break;
default:
return (0);
}
}

return (num);
}
