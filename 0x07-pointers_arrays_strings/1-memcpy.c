#include "main.h"
/**
 *_memcpy - this a function that do copy  memory area
 *@dest: a memory to be stored
 *@src: a memory to be copied
 *@n: no of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
