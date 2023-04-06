#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: input string character
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
}
