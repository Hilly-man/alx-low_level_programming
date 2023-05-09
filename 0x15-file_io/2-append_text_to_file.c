#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: On success, returns 1. On failure, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	return (-1);

	if (len > 0)
	{
		w = write(o, text_content, len);
		if (w == -1)
		{
			close(o);
			return (-1);
		}
	}

	close(o);
	return (1);
}
