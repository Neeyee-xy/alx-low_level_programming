#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (success)
 */
int main(void)
{
	char al='a';
		while(al <='z')
		{
			putchar('%c',al);
			al ++;
			putchar('\n');
		}
		
	return (0);
}
