#include "main.h"

/**
 * print_sign - Entry point
 * @n: the character
 * Return: 1 if n is greater than 0, -1 if less than 0, else 0
 */
int print_sign(int n)
{
	if
		(n > 0)
		{
			_putchar('+');
			return (1);
		}
	else if
		(n == 0)
		{
			_putchar('0');
			return (0);
		}
	else if
		(n < 0)
		{
			_putchar('-');
			return (-1);
		}
		return (0);
}
