#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;
char w;
for (r = 48; r < 58; r++)
{
putchar(r);
}
for (w = 'a'; w <= 'f'; w++)
{
putchar(w);
}
putchar('\n');
return (0);
}
