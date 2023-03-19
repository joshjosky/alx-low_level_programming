#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints all possible different combination
 * Return: Always 0 (success)
 */
int main(void)
{
int w, x, y, z, i;
i = 0;
while (i <= 999)
{
w = i / 100;
x = i / 10;
y = i % 10;
z = b % 10;
if ((w >= z) || (x >= y) || (z >= y))
{
i++;
continue;
}
putchar(w + '0');
putchar(z + '0');
putchar(y + '0');
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
