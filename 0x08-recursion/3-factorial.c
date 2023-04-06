#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: an integer input
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	int x, factorial = 1;

	if (n < 0)
	{
		return (-1);
	}

	for (x = 1; x <= n; x++)
	{
		factorial *= x;
	}

	return (factorial);
}
