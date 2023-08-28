#include "main.h"
/**
 * _strspn - start
 * @s: arg
 * @accept: arg
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				y++;
				break;
			}
			else if (accept[z + 1] == '\0')
			{
				return (y);
			}
		}
		s++;
	}
	return (y);
}
