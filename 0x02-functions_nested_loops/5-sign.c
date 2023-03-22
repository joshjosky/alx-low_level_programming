#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: is an input variable
 * Return: 1 if n > 0, 0 if n = 0, otherwise -1 if n is <
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
