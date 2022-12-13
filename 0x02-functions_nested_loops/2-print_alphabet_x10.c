#include "main.h"
/**
 *  print_alphabet_x10 - Prints 10 times the alphabet, in lowercase 
 *  followed by new line
*/
void print_alphabet_x10(void)
{
int countA = 0;
char lett_r;
while (countA++ <= 9)
{
for (lett_r = 'a'; lett_r <= 'z'; lett_r++)
_putchar(lett_r);
_putchar('\n');
}
}
