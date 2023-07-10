#include "main.h"
/**
 * _strstr - Entry point, locate substring.
 * @haystack: input.
 * @needle: input.
 * Return: Always 0 (Success).
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *r = haystack;
char *t = needle;
while (*r == *t && *t != '\0')
{
r++;
t++;
}
if (*t == '\0')
return (haystack);
}
return (0);
}
