#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural bnumbers from n to 98
 * @n: The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
