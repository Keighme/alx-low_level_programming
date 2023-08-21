#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string that will be printed
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
