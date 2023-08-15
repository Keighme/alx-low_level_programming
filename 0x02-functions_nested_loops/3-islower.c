#include "main.h"
/**
 * _islower - checks if param is lowercase
 * @c: param
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
