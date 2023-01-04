#include "main.h"
/**
 *   _strspn - gets the length of a prefix substring
 *   @s: segment to return bytes from
 *   @accept: the bytes to include
 *   Return: the number of bytes in the initial segment of @s which
 *           consist only of bytes from @accept
*/
unsigned int _strspn(char *s, char *accept)
{
int m, n;
int o = 0;
for (m = 0; s[m] != '\0'; m++)
{
if (s[m] != 32)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[m] == accept[n])
o++;
}
}
else
return (o);
}
return (o);
}
