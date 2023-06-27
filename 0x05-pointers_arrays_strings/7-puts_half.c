#include "main.h"
/**
 * puts_half - print half of string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int m, n, lol;
lol = 0;
for (m = 0; str[m] != '\0'; m++)
lol++;
n = (lol / 2);
if ((lol % 2) == 1)
n = ((lol + 1) / 2);
for (m = n; str[m] != '\0'; m++)
_putchar(str[m]);
_putchar('\n');
}
