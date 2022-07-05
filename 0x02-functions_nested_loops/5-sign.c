#include "main.h"
/**
* print_sign - check numbers
* @x: number to check
*
* Return:0 or 1
*/
int print_sign(int x)
{
	int num;

	if (x > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (x == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
