#include "main.h"
/**
 * leet - encode into 1337.
 * @n: input value.
 * Return: n value.
 */
char *leet(char *n)
{
int t, r;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (r = 0; n[r] != '\0'; r++)
{
for (s = 0; s < 10; s++)
{
if (n[t] == s1[r])
{
n[t] = s2[r];
}
}
}
return (n);
}
