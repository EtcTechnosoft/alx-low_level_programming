#include <stdio.h>
/**
* main - Entry point
*
* Return: 0  (success)
*/
int main(void)
{
	int a, b, c, d;

	a = b = c = d = 21;

	while (a <= 52)
	{
	b = 21;
	while (b <= 52)
	{
	c = 21;
	while (c <= 52)
	{
	d = 21;
	while (d <= 52)
	{
	if ((a == c && b < d) || (a < c && b <= d) || (a < c && b >= d))
	{
	putchar(a);
	putchar(b);
	putchar(' ');
	putchar(c);
	putchar(d);
	if (a == 52 && b == 51 && c == 52 && d == 52)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	}
	d++;
	}
	c++;
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
