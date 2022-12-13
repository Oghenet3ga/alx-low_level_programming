#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main (void)
{
	void print_alphabet_x10(void);
       
	char i = 1;
	
	while (i <= 10)
	{
		char c = 'a';
		while (c <= 'z')
			{
				putchar(c);
		 		c++;
			}
	}
	putchar ('\n');
	i++;
	return (0);
}		
