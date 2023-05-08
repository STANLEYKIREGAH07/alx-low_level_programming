#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fdd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of the file buffer is storing chars for
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *bufferr;

	bufferr = malloc(sizeof(char) * 1024);

	if (bufferr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufferr);
}

/**
 * close_file - Closes file descriptors.
 * @fdd: The file descriptor to be closed.
 */
void close_file(int fdd)
{
	int x;

x = close(fdd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of argument supplied to the program.
 * @argv: array of pointers to the arguments 
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fromm, too, rr, ww;
	char *bufferr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferr = create_buffer(argv[2]);
	fromm = open(argv[1], O_RDONLY);
	rr = read(fromm, bufferr, 1024);
 too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromm == -1 || rr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferr);
			exit(98);
		}

		ww = write(too, bufferr, rr);
		if (too == -1 || ww == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferr);
			exit(99);
		}

		rr = read(fromm, bufferr, 1024);
		too = open(argv[2], O_WRONLY | O_APPEND);

	} while (rr > 0);

	free(bufferr);
	close_file(fromm);
	close_file(too);

	return (0);
}
