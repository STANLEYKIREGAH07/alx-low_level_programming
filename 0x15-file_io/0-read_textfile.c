#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: x-actual number of bytes read and printed
 * and 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t fdd;
ssize_t x;
ssize_t y;

fdd = open(filename, O_RDONLY);
if (fdd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
y = read(fdd, buff, letters);
x = write(STDOUT_FILENO, buff, y);

free(buff);
close(fdd);
return (x);
}
