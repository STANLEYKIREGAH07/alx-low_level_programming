#include "main.h"

/**
 * _strncat - concates two strings
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes to be appended
 * Return: Apointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
