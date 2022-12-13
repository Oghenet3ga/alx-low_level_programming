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
	_putchar('0' - c);
	return (0);
}
