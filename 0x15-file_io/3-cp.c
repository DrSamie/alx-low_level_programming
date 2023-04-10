#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int a);

/**
 * create_buffer – allocates 1024 buffer size.
 * @file: file name for buffer.
 * Return: pointer to the buffer.
 */
char *create_buffer(char *file)
{
char *b;

b = malloc(sizeof(char) * 1024);
if (b == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (b);
}
/**
 * close_file – closes file descriptors.
 * @a:  file descriptor .
 */
void close_file(int a)
{

	int d;

	d = close(a);

	if (d == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close a %d\n", a);
	exit(100);
}
}

/**
 * main – copies file content to another.
 * @argc: number of arguments.
 * @argv: array of pointer to argument.
 * Return: 0 if success.
 * Description: exit code 97- if argument count is incorrect
 * exit code 98 - if file_from does not exist/cannot be read
 * exit code 99 - if file_to cannot be created or written to
 * exit code 100 - if file_to/file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int start, end, re, wr;
	char *b;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	b = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	re = read(start, b, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (start == -1 || re == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(b);
	exit(98);
	}
	wr = write(end, b, re);
	if (end == -1 || wr == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(b);
	exit(99);
	}
	re = read(start, b, 1024);
	end = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(b);
	close_file(start);
	close_file(end);
	return (0);
}

