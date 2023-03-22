#include "main.h"

/**
 *  _abs - Write a function that computes the absolute value of an integer.
 * @n: is an integer
 * Return: 0 ALways (success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
