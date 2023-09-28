#include "main.h"

/**
 * get_bit - start
 * @n: argument
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int bit_v;

	if (index > 63)
	{
		return (-1);
	}

	bit_v = (n >> index) & 1;

	return (bit_v);
}
