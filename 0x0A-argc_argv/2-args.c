#include "main.h"

/**
 * main - Entry point
 * Description: A program that prints th name of the user
 * passed in from the command line as argument
 * @argv: A vector holding the command line arguments.
 * @argc: the number of elements in argv
 * Return: Always return zero.
 */

int main(int argc, char **argv)
{
	int i;

	while (++(*argv) != NULL)
	{
		i = 0;
		while (*argv[i] != NULL)
		{
			_putchar(*argv[i]++);
		}
		_putchar('\n');
	}
	return (0);
}
