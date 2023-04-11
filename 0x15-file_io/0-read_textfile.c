#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened, read_file, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opened = open(filename, O_RDONLY);
	read_file = read(opened, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (opened==-1 || read_file==-1 || write_file==-1 || write_file!=read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opened);

	return (write_file);
}
