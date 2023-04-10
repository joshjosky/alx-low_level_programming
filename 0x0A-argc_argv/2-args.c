#include <stdio.h>

/**
 * main - entry point of the codes
 * @argc: argument count
 * @argv: a variable that holds the arrays of strings
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
