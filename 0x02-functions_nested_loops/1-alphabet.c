#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
 print_alphabet(void);
int main(void)
{
    print_alphabet(void);
    return (0);
}
char print_alphabet(void){
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
