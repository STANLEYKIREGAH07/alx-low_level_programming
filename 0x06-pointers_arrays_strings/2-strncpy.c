#include "main.h"

/**
 * _strncopy - copies at most an inputted number
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncopy(char *dest, char *src, int n)
{

int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
