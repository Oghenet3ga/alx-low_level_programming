#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 */
void print_alphabet_x10(void)
{
	char i = 1;

	while (i <= 10)
	{
		char c = 'a';

		while
		(c <= 'z')
			{
				_putchar(c);
				c++;
			}
	}
	_putchar ('\n');
	i++;
}
