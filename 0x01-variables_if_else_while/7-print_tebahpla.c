#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - start
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
