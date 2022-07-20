#include "main.h"

/**
 * is_prime - checks if an input number is a prime number.
 * @n: input number.
 * @y: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int y)
{
	if (n % y == 0)
	{
		if (n == y)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, y + 1));
}
/**
 * is_prime_number - checks if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
