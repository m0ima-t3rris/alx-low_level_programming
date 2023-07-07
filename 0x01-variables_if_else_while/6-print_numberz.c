#include <stdio.h>

/**
 * main - Entry point.
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
int t;
for (t = 48; t < 58; t++)
{
putchar(t);
}
putchar('\n');
return (0);
}
