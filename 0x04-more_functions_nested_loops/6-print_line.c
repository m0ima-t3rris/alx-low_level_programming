#include "main.h"
/**
* print_line - Draw straight line in terminal.
* @n: number of times the charactor _ should be printed.
* he line should end with a \n.
* print \n If n <= 0.
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
