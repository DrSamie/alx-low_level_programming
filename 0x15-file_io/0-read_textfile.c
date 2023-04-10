#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Reads file(text) and prints to STDOUT.
 * @letters: number of letters to be read
 * @filename: text file to be read
 * Return: b- number of bytes read and printed
 *  0 if failure, filename if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *i;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
	return (0);
	i = malloc(sizeof(char) * letters);
	c = read(a, i, letters);
	b = write(STDOUT_FILENO, i, c);

	free(i);
	close(a);
	return (b);
}

