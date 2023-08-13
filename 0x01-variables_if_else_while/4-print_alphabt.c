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

	char str1[32] = "abcdfghijklm";

	char str2[] = "noprstuvwxyz";

	strcat(str1, str2);
	while (str1[i] != '\0')
	{
		putchar(str1[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
