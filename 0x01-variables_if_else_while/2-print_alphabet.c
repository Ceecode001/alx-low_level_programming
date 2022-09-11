#include <stdio.h>
int main(void)
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */	
{	
	char c = 'a';

	while (c <= 'z')
	{	
		putchar(c);
		c++;
	}	
	putchar('\n');

	return (0);

}	
