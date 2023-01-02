#include "main.h"
#include <string.h>

/**
 * *_memcpy - _memcpy() function
 * @dest: memory area
 * @src: memory area
 * @n: unsigned integer
 * Return: des
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
