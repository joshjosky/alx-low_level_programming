#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a no
 * @n: integer input
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @x: iterator
 * Return: the resulting square root
 */
int natural_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (natural_sqrt_recursion(n, x + 1));
}
