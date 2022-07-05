#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print alphabet 10 times
*
* return: 0
*/
void print_alphabet_x10(void)
{
	int x;

	char c;

	for (x = 0; x <= 9; x++)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
}
