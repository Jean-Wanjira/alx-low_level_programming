#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: points to string of 0 and 1 chars
* Return: the converted number Otherwise 0 if b = NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] ; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
val = 2 * val + (b[i] - '0');
}
return (val);
}
