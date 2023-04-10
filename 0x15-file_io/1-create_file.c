#include "main.h"

/**
 * create_file - creates a file with the given name.
 * @filename: name of the file to be created.
 * @text_content: the content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int pt, z, content_len = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_len = 0; text_content[content_len];)
			len++;
	}

	pt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(pt, text_content, content_len);

	if (pt == -1 || z == -1)
		return (-1);

	close(pt);

	return (1);
}

