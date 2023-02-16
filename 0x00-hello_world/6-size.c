#include <stdio.h>
/**
 * main- a program that printsthe size of various computer types
 * Return: 0 (success)
 */

int main(void)
{
char a;
int b;
long int c;
long long long int d;
float f;
printf("Size of char: %lu byte(s)\n", (unsignedlong)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsignedlong)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsignedlong)sizeof(c));
printf("Size of long long long int: %lu byte(s)\n", (unsignedlong)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsignedlong)sizeof(f));
return (0);
}
