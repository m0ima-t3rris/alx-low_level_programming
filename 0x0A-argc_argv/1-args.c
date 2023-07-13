#include <stdio.h>
#include "main.h"
/**
 * main - entry point, print number of arguments passed to the program.
 * @argc: number of argument.
 * @argv: array of argument.
 * Return: Always 0 on Success
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
