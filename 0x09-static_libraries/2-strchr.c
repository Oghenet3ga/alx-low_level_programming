#include "main.h"
#include <string.h>

/**
 * *_strchr - Returns a pointer to the first occurrence of the char c
 * @s: string
 * @c: character
 * Return: first occurrence of character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
