#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints to 98
* @x: starting value
* Retrun:0 or 1
*/
void print_to_98(int x)
{
	while (x < 98)
	{
		printf("%i, ", x);
		x++;
	}
	while (x > 98)
	{
		printf("%i, ", x);
		x--;
	}
	printf("98");
	putchar('\n');
}
