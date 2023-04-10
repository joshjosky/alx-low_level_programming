#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the codes
 * _atoi - makes all string to integers
 * @argc: argument count
 * @argv: a variable that holds the arrays of strings
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc < 2)
	{
		printf("Error\n");
	return (1);
	}
	for (x = 1; x <= argc; x++)
	{
		for (y = 2; y <= argc; y++)
			printf("%s\n * %s\n", argv[x], argv[y]);
	}

	return (0);
}
