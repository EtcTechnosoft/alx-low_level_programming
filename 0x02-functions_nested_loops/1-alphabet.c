#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabet
*
* return: always 0
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
