#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: first param
 * @argv: second param
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum;

	char *error = "Error";

	argc--;
	if (argc < 2)
	{
		printf("%s\n", error);
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
