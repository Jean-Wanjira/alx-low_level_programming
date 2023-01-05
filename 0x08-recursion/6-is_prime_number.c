#include "main.h"
/**
 *  primeSearch - searches for if a number is prime
 *  @e: the number to check
 *  @f: the numbers we'll go through
 *  Return: Whether or not the number is a prime number
*/
int primeSearch(int e, int f)
{
if (e <= 1 || e % f == 0)
return (0);
else if (e == f)
return (1);
else if (e > f)
primeSearch(e, f + 1);
return (1);
}
/**
 *   is_prime_number - tells us if an integer is a prime number or not
 *   @n: the number to check
 *   Return: 0 if the number is not prime, and 1 if it is
*/
int is_prime_number(int n)
{
return (primeSearch(n, 2));
}
