#include <stdio.h>
/**
 * main - assign a random number to int n everytime
 * description: prints the alphabet in lowercase, and then in uppercase
 * Return: 0 always (success)
 */
int main(void)
{
char c, C;
c = 'a';
C = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
