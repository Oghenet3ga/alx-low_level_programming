#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				int x;

				x = n % 10;
				if (x > 5)
					printf("Last digit of %i is %i and is greater than 5\n", n, x);
				else if (n == 0)
					printf("Last digit of %i is 0 and is 0\n", n);
				else if (n < 6 != 0)
					printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
				return (0);

}
