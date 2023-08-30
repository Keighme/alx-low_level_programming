#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -  start point
 * @n: arg
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion -  start point
 * @n: arg
 * @i: arg
 * Return: int
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_sqrt_recursion(n, i + 1));
}
