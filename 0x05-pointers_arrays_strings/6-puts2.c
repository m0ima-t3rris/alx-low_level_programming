#include "main.h"
/**
 * puts2 - print string charector followed by line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int lol = 0;
int r = 0;
char *t = str;
int z;
while (*t != '\0')
{
t++;
lol++;
}
r = lol - 1;
for (z = 0 ; z <= t ; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
