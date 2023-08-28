#include "main.h"
/**
 * _memset - fills memory
 * @s: argument
 * @b: argument
 * @n: argument
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
