#include "main.h"
/**
 * flip_bits - start
 * @n: argument
 * @m: argument
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int i, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exclusive >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}
