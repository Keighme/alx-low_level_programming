#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int z = n;

	for (; y < z; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
