#include "main.h"
#include <string.h>

/**
 * *_memset - _memset() function
 * @s: pointer
 * @b: character
 * @n: unsigned integer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
