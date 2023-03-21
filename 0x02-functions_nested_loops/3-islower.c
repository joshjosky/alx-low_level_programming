#include "main.h"

/**
 * _islower - a function that checks for the lowercase character
 * @c: is an input character
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{
	char y;
	int x = 0;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y == c)
			x = 1;
	}
	return (x);
}
