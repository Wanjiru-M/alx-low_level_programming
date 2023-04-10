#include "main.h"
#include "stdlib.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *d;
	ssize_t pt;
	ssize_t y;
	ssize_t z;

	pt = open(filename, O_RDONLY);
	if (pt == -1)
		return (0);
	d = malloc(sizeof(char) * letters);
	z = read(pt, d, letters);
	y = write(STDOUT_FILENO, d, z);

	free(d);
	close(pt);
	return (y);
}



