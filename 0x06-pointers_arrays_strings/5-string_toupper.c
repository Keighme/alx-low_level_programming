#include "main.h"
/**
 * string_toupper - change case
 * @n: parameter
 * Return: n
 */
char *string_toupper(char *n)
{
	int z = 0;

	while (n[z] != '\0')
	{
		if (n[z] >= 'a' && n[z] <= 'z')
		{
			n[z] = n[z] - 32;
		}
		z++;
	}
	return (n);
}
