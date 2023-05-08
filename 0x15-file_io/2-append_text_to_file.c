#include "main.h"

/**
 * append_text_to_file - Appends text at file end.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p, x, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

p = open(filename, O_WRONLY | O_APPEND);
x = write(p, text_content, len);
if (p == -1 || x == -1)
return (-1);
close(p);
return (1);
}
