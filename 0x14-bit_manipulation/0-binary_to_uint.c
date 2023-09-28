#include "main.h"
/**
 * binary_to_uint - start
 * @b: parameter
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int de_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		de_val = 2 * de_val + (b[i] - '0');
	}

	return (de_val);
}
