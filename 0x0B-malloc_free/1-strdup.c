#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *t;
int s, r = 0;

if (str == NULL)
return (NULL);
s = 0;
while (str[s] != '\0')
s++;

t = malloc(sizeof(char) * (s + 1));

if (t == NULL)
return (NULL);

for (r = 0; str[r]; r++)

s[r] = str[r];
return (t);
}
