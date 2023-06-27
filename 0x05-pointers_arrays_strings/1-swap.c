#include "main.h"
/**
 * swap_int - swap values of 2 integers
 * @a: swapped interger
 * @b: swapped interger
 */
void swap_int(int *a, int *b)
{
int z;
z = *a;
*a = *b;
*b = z;
}
