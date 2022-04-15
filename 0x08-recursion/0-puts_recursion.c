#include <stdio.h>
#include "main.h"

/**
 * 0-puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
