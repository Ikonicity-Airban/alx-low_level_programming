#include"main.h"

/**
 * main - Entry point
 * Description: A program that prints th name of the user
 * passed in from the command line as argument
 * @argv: A vector holding the command line arguments.
 * @argc: the number of elements in argv
 * Return: Always return zero.
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char *c = argv[1];

	while (*c++)
		_putchar(*c);
	return (0);
}
