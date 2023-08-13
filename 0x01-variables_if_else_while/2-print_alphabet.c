#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - start
 * Return: 0
 */
int main(void)
{
	int i = 0;

	char f[28] = "abcdefghijklm";

	char s[] = "nopqrstuvwxyz\n";

	strcat(f, s);
	while (f[i] != '\0')
	{
		putchar(f[i]);
		i++;
	}
	return (0);
}
