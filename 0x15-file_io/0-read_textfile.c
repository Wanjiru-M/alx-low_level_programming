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
    if (filename == NULL)
        return (0);

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    char *buffer = malloc(letters * sizeof(char));
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    ssize_t r = read(fd, buffer, letters);
    if (r == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    ssize_t w = write(STDOUT_FILENO, buffer, r);
    if (w == -1 || w != r)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (w);
}
