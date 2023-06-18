#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 *
 * @num: The integer to print
 */
void print_number(int num)
{
	char buffer[10];
	int i = 0, digit = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	/* Convert the number to a string in reverse order */
	while (num > 0)
	{
		digit = num % 10;
		buffer[i++] = '0' + digit;
		num /= 10;
	}

	/* Print the string in correct order */
	while (--i >= 0)
	{
		_putchar(buffer[i]);
	}
}

/**
 * main - Multiplies two given numbers and prints the result
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int num1 = 0, num2 = 0, result = 0;
	char *p;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	/* Convert the arguments to integers */
	for (p = argv[1]; *p != '\0'; p++)
	{
		if (*p < '0' || *p > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}

		num1 = num1 * 10 + (*p - '0');
	}

	for (p = argv[2]; *p != '\0'; p++)
	{
		if (*p < '0' || *p > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}

		num2 = num2 * 10 + (*p - '0');
	}

	result = num1 * num2;

	print_number(result);
	_putchar('\n');
	return (0);
}
