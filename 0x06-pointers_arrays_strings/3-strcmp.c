#include "main.h"

/**
* _strcmp - compares pointers to two strings
* @s1: Pointer to the first string to be compared
* @s2: Pointer to the second string to be compared
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}

