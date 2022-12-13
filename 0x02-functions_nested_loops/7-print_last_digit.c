#include "main.h"

/**
 * print_last_digit - Entry point
 * @m: the character
 * Return: value of last digit
 */
int print_last_digit(int m)
{
	int c;

	c = m % 100;

	_putchar(c);
	return (0);
}
