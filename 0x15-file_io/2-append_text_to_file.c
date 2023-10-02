#include "main.h"
/*
 * append_text_to_file- appends the file
 * @filename: function paramater
 * @text_content: function paramater that is a pointer
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

	}

	o = open(filename, O_WRONGLY | O_APPEND);
	W = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

