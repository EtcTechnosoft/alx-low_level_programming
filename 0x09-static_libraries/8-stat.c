#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @s: pointer
 */

void _puts(char *s)
{
for (; *s != '\0'; s++)
{
_putchar(*s);
}
_putchar('\n');
}
