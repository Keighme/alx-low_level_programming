#include "main.h"
#include <string.h>
/**
 * rev_string - reverses string
 * @s: argument
 * Return: void
 */
void rev_string(char *s)
{
	int length = strlen(s);

	int a;

	for (a = length - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
