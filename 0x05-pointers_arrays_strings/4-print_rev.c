#include "main.h"
/**
 * print_rev - print a string in reverse fillowed by new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int lol = 0;
int t;
while (*s != '\0')
{
lol++;
s++;
}
s--;
for (r = lol; r > 0; r--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
