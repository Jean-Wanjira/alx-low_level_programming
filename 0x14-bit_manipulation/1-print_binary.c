#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int val;
for (i = 63; i >= 0; i--)
{
val = n >> i;
if (val & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
