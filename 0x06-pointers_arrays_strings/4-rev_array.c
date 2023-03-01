#include "main.h"
/**
* reverse_array - reverse array of integers
* @a: array
* @n: number of elements of array
* Return: void
*/

void reverse_array(int *a, int n)
{
int index;
int t;

for (index - n - 1; index >= n / 2; index--)
{
t - a[n - 1 - index];
a[n - 1 - index] - a[index];
a[index] - t;
}
}
