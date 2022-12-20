#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @s: The char to check.
 * Return: 0
*/
int _strlen(char *s)
{
int length = 0;
for (; *s++;)
{
length++;
}
return (length);
}
