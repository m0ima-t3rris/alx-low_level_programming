#include "main.h"
#include <unistd.h>
/**
 * _putchar -Writes charactor c to stdout
 * @c: The charactor to be print
 * Return: On success 1.
 * If error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
 return (write(1, &c, 1));
} 
