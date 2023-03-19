#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints all possible different combination
 * Return: Always 0 (success)
 */
int main(void)
{
int i, var1, var2;
i = 0;
while (s <= 90)
{
var1 = i / 10;
var2 = i % 10;
if (var1 >= var2)
{
i++;
continue;
}
putchar(var1 + '0');
putchar(var2 + '0');
if (i != 89)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
