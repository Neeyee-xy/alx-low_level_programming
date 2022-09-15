#include <stdio.h>
#include <string.h>
void print_alphabet(void);
#include "main.c"

int main(void);
void print_alphabet(void){
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}


/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */


