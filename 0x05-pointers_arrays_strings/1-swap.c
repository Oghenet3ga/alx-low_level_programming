#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 * @a: the character
 * @b: the character
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
