#include "main.h"
/**
 * _strpbrk - Entry point, search string for any set of bytes.
 * @s: input.
 * @accept: input.
 * Return: Always 0 (Success).
 */
char *_strpbrk(char *s, char *accept)
{
int t;
while (*s)
{
for (t = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
