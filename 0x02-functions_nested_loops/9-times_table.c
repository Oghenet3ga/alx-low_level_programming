#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		_putchar(m * n);
	}
	_putchar('\n');
}
