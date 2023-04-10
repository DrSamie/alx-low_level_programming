#include "main.h"
/**
 * append_text_to_file – For appending text at file end.
 * @filename: Pointer to file name
 * @text_content: String added at file end
 *
 * Return: -1 if function fails/filename is NULL
 *  -1 if file does not exist, user lacks write permissions
 *    1 if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (c = 0; text_content[c];)
	c++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, c);

	if (a == -1 || b == -1)
	return (-1);
	close(a);
	return (1);
}

