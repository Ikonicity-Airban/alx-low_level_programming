#include "main.h"

/**
 * main - Entry point
 * Description: A program that prints th name of the user
 * passed in from the command line as argument
 * @argv: A vector holding the command line arguments.
 * @argc: the number of elements in argv
 * Return: Always return zero.
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	_putchar(argc - 1 + '0');
	_putchar('\n');
	return (0);
}
