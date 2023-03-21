#include "main.h"

/**
 * _isalpha - is a function that checks for alphabetic character
 * @c: is an input character
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	char y;
	int x = 0;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y == c)
			x = 1;
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		if (y == c)
			x = 1;
	}
	return (x);
}
