#include "main.h"
/**
 * _strhchr - start
 * @s: arg
 * @c: arg
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
		{
			return (&s[z]);
		}
	}
	return (0);
}
