#include "main.h"
/**
 * create_file – for creating a file.
 * @filename: Pointer to file name.
 * @text_content: Pointer to file string.
 * Return: 1 if success and -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (c = 0; text_content[c];)
	c++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, c);

	if (a == -1 || b == -1)
	return (-1);
	close(a);
	return (1);
}


