#include "main.h"
#include <stdio.h>
/**
 *   print_diagsums - prints the sum of the two diagonals of a square
 *   matrix of integers
 *   @a: the name of the array
 *   @size: the size of the array
 *   Return: nothing
*/
void print_diagsums(int *a, int size)
{
int d = 0;
int e = size - 1;
int Sum1 = 0;
int Sum2 = 0;
while (d <= (size * size))
{
Sum1 = Sum1 + a[d];
d = d + size + 1;
}
while (e < (size * size - 1))
{
Sum2 += a[e];
e = e + size - 1;
}
printf("%d, %d\n", Sum1, Sum2);
}
