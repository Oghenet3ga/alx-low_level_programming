#include "main.h"

/**
 * more_numbers - print more numbers
 * Return: no return
 */
void more_numbers(void)
{
	int m, n;

	for (m = 0; m <= 10; m++)
	{
	for (n = 0; n < 15; n++)
	{
	if (n >= 10)
	_putchar('1');
	_putchar(n % 10 + '0');
	}

	_putchar('\n');
	}
}
