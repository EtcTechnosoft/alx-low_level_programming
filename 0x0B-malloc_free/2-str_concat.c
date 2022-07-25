#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: pointer of concat if success.
 */

char *str_concat(char *s1, char *s2)
{
unsigned int strlen1, strlen2, i, j;
char *s;

strlen1 = 0;
while (s1 && s1[strlen1])
strlen1++;

strlen2 = 0;
while (s2 && s2[strlen2])
strlen2++;

s = malloc(sizeof(*s) * (strlen1 + strlen2 + 1));

if (s == NULL)
return (NULL);

i = 0;
while (i < strlen1)
{
s[i] = s1[i];
i++;
}

j = 0;
while (i < (strlen1 + strlen2))
{
s[i] = s2[j];
i++;
j++;
}

s[i] = '\0';

return (s);
}
