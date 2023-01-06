#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments in cl
 * @argv: array of strings of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

