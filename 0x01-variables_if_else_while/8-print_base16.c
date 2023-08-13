#include <stdlib.h>
#include <stdio.h>
/**
 * main - start
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	i = 0;

	while (i < 6)
	{
		putchar(i + 'a');
		i++;
	}
	putchar('\n');
	return (0);
}
