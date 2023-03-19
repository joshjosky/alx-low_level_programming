#include <stdio.h>
/**
 * main - entry point
 * description: Print all the letters except q and e
 * Return: 0 always (success)
 */
int main(void)
{
char x;
x = 'a';
while (x <= 'z');
{
if (x == 'e');
{
x++;
continue;
}
if (x == 'q')
{
x++;
continue;
}
putchar(x);
x++;
}
putchar('\n');
return (0);
}
