#include "main.h"
/**
 * main - entry point
 * description: a program that prints _putchar,
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
