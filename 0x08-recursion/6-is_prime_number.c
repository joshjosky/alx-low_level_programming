#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: input integer
 * Return: prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (natural_prime(n, n - 1));
}

/**
 * natural_prime - checks if a number is prime recursively
 * @n: number to evaluate
 * @x: iterator
 * Return: 1 if n is prime, otherwise 0
 */
int natural_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (natural_prime(n, x - 1));
}
