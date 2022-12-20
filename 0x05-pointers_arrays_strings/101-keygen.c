#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Generates random valid passwords for the
 *       program 101-crackme.
 * Return: Always 0.
*/
int main()
{
char passwd[84];
int i = 0, sum = 0, diff_half1, diff_half2;
srand(time(0));
while (sum < 2772)
{
passwd[i] = 33 + rand() % 94;
sum += passwd[i++];
}
passwd[i] = '\0';
if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diff_half1++;
for (i = 0; passwd[i]; i++)
{
if (passwd[i] >= (33 + diff_half1))
{
passwd[i] -= diff_half1;
break;
}
}	
for (i = 0; passwd[i]; i++)
{
if (passwd[i]>= (33 + diff_half2))
{
passwd[i] -= diff_half2;
break;
}
}
printf("%s", passwd);
}
return (0);
}

