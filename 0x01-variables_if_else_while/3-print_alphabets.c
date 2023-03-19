#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point for functions
 * description: prints the alphabet in lowercase, and then in uppercase
 * Return: 0 always (success)
 */
int main(void)
{
char x, X;
x = 'a';
X = 'A';
{
while (x <= 'z')
{
putchar(x);
x++;
}
while (X <= 'Z')
{
putchar(X);
X++;
}
putchar('\n');
return (0);
}
