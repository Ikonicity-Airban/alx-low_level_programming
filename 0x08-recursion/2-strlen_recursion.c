#include"main.h"

/**
 * _strlen_recursion - A function the count and return
 * the length of the string passed to it.
 * @s: string to be counted.
 * Return: return the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
