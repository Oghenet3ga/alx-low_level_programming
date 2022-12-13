#include "main.h"

/**
 * print_last_digit - Entry point
 * @m: the character
 * Return: value of last digit
 */
int print_last_digit(int m)
{
	int c;

	c = m % 10;

	if (c < 0)
		c *= -1;

	_putchar(c + '0');
	return (0);
}
