#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: input variable
 * @c: input variable
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
