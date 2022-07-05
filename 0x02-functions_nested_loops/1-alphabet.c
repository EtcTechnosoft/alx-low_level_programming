#include <stdio.h>
#include "main.h"
/**
* main - entry point
*
* Description: 'Prints alphabets'
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
