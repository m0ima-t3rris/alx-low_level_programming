#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of size size and assign char c.
 * @size: size of array.
 * @c: char to assign.
 * Description: create array of size and assign char c.
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c);
{
char *str;
unsigned int r;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (r = 0; r < size; r++)
str[r] = c;
return (str);
}
