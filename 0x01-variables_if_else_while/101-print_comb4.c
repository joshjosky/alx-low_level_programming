#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints all possible different combination
 * Return: Always 0 (success)
 */
int main(void)
{
int i, var1, var2, var3, var4;
i = 0;
while (i <= 999)
{
var1 = i / 100;
var2 = i / 10;
var3 = i % 10;
var4 = var2 % 10;
if ((var1 >= var4) || (var1 >= var3) || (var4 >= var3))
{
i++;
continue;
}
putchar(var1 + '0');
putchar(var2 + '0');
putchar(var3 + '0');
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
