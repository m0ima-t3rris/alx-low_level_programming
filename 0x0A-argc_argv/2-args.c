#include <stdio.h>
#include "main.h"
/**
 * main - entry point, print all argument it receive.
 * @argc: number of argument.
 * @argv: array of argument.
 * Return: Always 0 on Success
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
