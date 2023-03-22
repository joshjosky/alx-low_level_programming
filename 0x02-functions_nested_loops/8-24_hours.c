#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of jack bauer
 * Return: void
 */

void jack_bauer(void)
{
	int y;
	int x;

	for (y = 0; y <= 23; y++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar(':');
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
		_putchar('\n');
		}
	}
}
