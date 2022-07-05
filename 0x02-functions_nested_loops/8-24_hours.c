#include "main.h"
/**
* jack_bauer - every minutes of the day is printed
*
* Return:void
*/
void jack_bauer(void)
{
	int h1;

	int h2;

	int m1;

	int x = 9;

	h2 = 0;

	while (h2 <= 2)
	{
		if (h2 == 2)
		{
			x = 3;
		}
		h1 = 0;
		while (h1 <= x)
		{
			m2 = 0;
			while (m2 <= 5)
			{
				m1 = 0;
				while (m1 <= 9)
				{
					_putchar('0' + h2);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m2);
					_putchar('0' + m1);
					_putchar('\n');
					m1++;
				}
				m2++;
			}
			h1++;
		}
		h2++;
	}
}
