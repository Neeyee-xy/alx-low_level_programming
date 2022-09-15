#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
char print_alphabet();
int main(void)
{
  char print_alphabet();
    return (0);
}
char print_alphabet(){
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
