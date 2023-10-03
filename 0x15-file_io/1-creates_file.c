#include "main.h"
/**
 * create_file - this function creates a file
 * @filename: A function parameter that is a pointer
 * @text_content: function paramter that is a pointer
 * Return: 1 or -1 depending on conditions
 */
int create_file(const char *filename, char *text_content)
{
	int f_d, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f_d, text_content, len);

	if (f_d == -1 || w == -1)
		return (-1);

	close(f_d);

	return (1);
}
