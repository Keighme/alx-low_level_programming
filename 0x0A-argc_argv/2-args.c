#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
