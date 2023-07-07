#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char t;
for (t = 'z'; t >= 'a'; t--)
{
putchar(t);
}
putchar('\n');
return (0);
}
