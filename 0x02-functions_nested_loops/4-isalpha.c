#include <stdio.h>
/**
 * _isalpha - check if param is an alphabet
 * @c: the param
 * Return: 1 if alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
