#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 * Return: void
 */
void print_times_table(int n)
{
	int var1, var2, var3;

	if (n >= 0 && n <= 15)
	{
		for (var1 = 0; var1 <= n; var1++)
		{
			for (var2 = 0; var2 <= n; var2++)
			{
				var3 = var2 * var1;
				if (var2 == 0)
				{
					_putchar(var3 + '0');
				} else if (var3 < 10 && var2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(var3 + '0');
				} else if (var3 >= 10 && var3 < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((var3 / 10) + '0');
					_putchar((var3 % 10) + '0');
				} else if (var3 >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((var3 / 100) + '0');
					_putchar(((var3 / 10) % 10) + '0');
					_putchar((var3 % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
