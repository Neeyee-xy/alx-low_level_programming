#include "stdio.h"
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

char print_alphabet(){
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
