#include "main.h"
/**
 *   sqrt_1 - Finds the square root of two numbers
 *   @d: The number
 *   @e: The number to test for the square root of @a
 *   Return: square root
*/
int sqrt_1(int d, int e)
{
if (e * e > d)
return (-1);
else if (e * e == d)
return (e);
else
return (sqrt_1(d, e + 1));
return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_1(n, 1));
}
