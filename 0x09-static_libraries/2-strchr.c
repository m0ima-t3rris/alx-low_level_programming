#include "main.h"
/**
 * _strchr - Entry point, locate a charector in string.
 * @s: input.
 * @c: input.
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int r = 0;
for (; s[r] >= '\0'; i++)
{
if (s[r] == c)
return (&s[r]);
}
return (0);
}
