#include "main.h"
/**
 * print_chessboard - Entry point, prints the chessboard.
 * @a: array.
 * Return: Always 0 (Success).
 */
void print_chessboard(char (*a)[8])
{
int r;
int t;
for (r = 0; r < 8; r++)
{
for (t = 0; t < 8; t++)
_putchar(a[r][t]);
_putchar('\n');
}
}
