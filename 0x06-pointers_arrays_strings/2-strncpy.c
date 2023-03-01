#include "main.h"

/**
 * _strncopy - copies at most an inputted number
 * @dest: The buffer storing the string copy
 * @src: The source of string
 * @n: The number of bytes to be appended
 * Return: Apointer to the resulting string
 */

char *_strncopy(char *dest, char *src, int n)
{

int index = 0, src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index]  = src[index];
for (index = src_len;  index < n; index++)
dest[index] = '\0';

return (dest);
}
