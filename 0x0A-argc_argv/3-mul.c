#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of the codes
 * @argc: argument count
 * @argv: a variable that holds the arrays of strings
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int x;

	if (argc != 3)
	{
		printf("error\n");
	return (1);
	}

	for (x = 1; x < argc; x++)
	{
		mul *= atoi(argv[x]);
	}

	printf("%d\n", mul);

	return (0);
}
