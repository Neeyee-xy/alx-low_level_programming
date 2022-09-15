#include "stdio.h"
void print_alphabet();
#include "main.c"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(){
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
