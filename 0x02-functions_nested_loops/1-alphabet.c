#include "stdio.h"
void print_alphabet(void);
#include "main.c"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void){
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
