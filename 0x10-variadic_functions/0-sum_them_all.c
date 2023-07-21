#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return  sum of all its paramters.
 * @n: The number of paramter passed to function.
 * @...: A variable number of paramter to calculate sum of
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameter.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int t, sum = 0;
va_start(ap, n);
for (t = 0; t < n; t++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
