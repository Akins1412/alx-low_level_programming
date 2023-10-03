#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *add;
	ssize_t li;
	ssize_t w;
	ssize_t t;

	li = open(filename, O_RDONLY);
	if (li == -1)
		return (0);
	add = malloc(sizeof(char) * letters);
	t = read(li, add, letters);
	w = write(STDOUT_FILENO, add, t);

	free(add);
	close(li);
	return (w);
}
