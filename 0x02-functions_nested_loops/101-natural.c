#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int var3, var2, var1;
	int n;

	var3 = 0;
	var2 = 0;
	var1 = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0)
		{
			var3 = var3 + n;
		}
		else if ((n % 5) == 0)
		{
			var1 = var1 + n;
		}
	}
	var1 = var3 + var2;
	printf("%lu\n", var1);
	return (0);
}

