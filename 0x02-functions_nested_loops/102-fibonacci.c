#include <stdio.h>
/**
* main - main code
* Description: computes and prints the sum of all the multiples number
*
* Return: 0
*/
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, num;

	while (i < 50)
	{
		num = a + b;
		a = b;
		b = num;
		printf("%lu", num);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
