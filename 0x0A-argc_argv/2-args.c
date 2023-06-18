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
	int i, j = 1;

	while (j++ < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			_putchar(argv[j][i]);
			i++;
		}
		_putchar('\n');
	}
	return (0);
}
