#include"main.h"

/**
 * _puts_recursion - A function that prints a string
 * adds a new line
 * @c: A string to be printed.
 */

void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c++);
		_puts_recursion(c);
	}
	else
		_putchar('\n');
}

