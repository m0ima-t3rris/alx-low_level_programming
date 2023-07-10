#include "main.h"
/**
 * _strcat - concatenate 2 strings.
 * @dest: input value.
 * @src: input value.
 * Return: void.
 */
char *_strcat(char *dest, char *src)
{
int t;
int s;
t = 0;
while (dest[t] != '\0')
{
t++;
}
s = 0;
while (src[s] != '\0')
{
dest[t] = src[s];
t++;
s++;
}
dest[t] = '\0';
return (dest);
}
