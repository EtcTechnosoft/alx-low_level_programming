#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes it with a specific
 *char
 *
 *@size: size of the array
 *@c: character that will initialize the array
 *
 *Return: a pointer to the array or NULL if the process fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	s = malloc(sizeof(char) * size);

	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}

	return (s);
}
