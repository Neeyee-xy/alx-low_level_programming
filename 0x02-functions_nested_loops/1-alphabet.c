#include <stdio.h>
void print_alphabet(void){
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
#include "main.c"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */


