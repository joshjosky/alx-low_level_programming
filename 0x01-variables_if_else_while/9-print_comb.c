#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints all possible combinations of single-digit
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
