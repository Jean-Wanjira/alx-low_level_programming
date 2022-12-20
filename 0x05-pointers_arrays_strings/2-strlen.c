#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 * Return : returns length of @s
*/
size_t _strlen(char *s)
{
size_t length = 0;
while (*s++)
length++;
return (length);
}
