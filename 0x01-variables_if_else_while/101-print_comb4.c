#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints all possible different combination
 * Return: Always 0 (success)
 */
int main(void)
{
int a, b, c, d, i;
i = 0;
while (i <= 999)
{
a = i / 100;
b = i / 10;
c = i % 10;
d = b % 10;
if ((a >= d) || (a >= c) || (d >= c))
{
i++;
continue;
}
putchar(a + '0');
putchar(d + '0');
putchar(c + '0');
if (i != 789)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
