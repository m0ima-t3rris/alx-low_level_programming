#include "main.h"
/**
 * _memset - fill block of memory with specific value.
 * @s: starting address of memory to be filled.
 * @b: desired value.
 * @n: number of bytes changed.
 * Return: changed array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
int r = 0;
for (; n > 0; r++)
{
s[r] = b;
n--;
}
return (s);
}
