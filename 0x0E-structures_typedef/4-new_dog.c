#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return length of string.
 * @s: string to evaluate.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
int t;
t = 0;
while (s[t] != '\0')
{
t++;
}
return (t);
}

/**
 * *_strcpy - copy string pointed to by src.
 * including terminating null byte (\0) to buffer pointed to by dest.
 * @dest: pointer to buffer in which we copy string.
 * @src: string to be copied.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int length, t;
length = 0;
while (src[length] != '\0')
{
length++;
}
for (t = 0; t < length; t++)
{
dest[t] = src[t];
}
dest[t] = '\0';
return (dest);
}

/**
 * new_dog - creates new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to new dog (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int length1, lenght2;
length1 = _strlen(name);
length2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (length1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (length2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
