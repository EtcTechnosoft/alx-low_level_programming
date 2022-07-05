#include "main.h"
/**
* print_last_digit - Outputs the last digit of a number
* @x: the first value to check
*
* Return: set of integer values
*/
int print_last_digit(int x)
{
	int d;

	d = x % 10;

	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
