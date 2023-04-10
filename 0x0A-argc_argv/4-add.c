#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of the codes
 * _atoi - makes all string to integers
 * @argc: argument count
 * @argv: a variable that holds the arrays of strings
 * Return: 0 Always or 1 for error
 */

int main(int argc, char *argv[])
{
	int x, add = 0;
	
	if (argc == 1)
	{
		printf("%d\n", add);
		return (0);
	}
	
	for (x = 1; x < argc; x++)
	{
		int y = 0;
		
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		add += atoi(argv[x]);
	}
	
	printf("%d\n", add);
	
	return (0);
}
