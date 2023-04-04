#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: first input
 * @size: second input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int var1, var2, x;

	var1 = 0;
	var2 = 0;

	for (x = 0; x < size; x++)
	{
		var1 = var1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		var2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", var1, var2);
}
