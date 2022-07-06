#include <stdio.h>
/**
* main - code block
* Description: prints sum of even-valued  number < 4,000,000
* 
* Return: 0
*/
int main(void)
{
	int x = 0, y = 1, num = 0;
	int sum = 0;

	while (num < 4000000)
	{
		num = x + y;
		x = y;
		y = num;
		if (num % 2 == 0)
			sum += num;
	}
	printf("%i\n", sum);
	return (0);
}
