#include "stdio.h"
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

print_alphabet(void){
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
