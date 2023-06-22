#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @list: a list of arguments pointing to the character to be printed
 *
 * Return: nothing
 */
void print_char(va_list list)
{
	char c = va_arg(list, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @list: a list of arguments pointing to the integer to be printed
 *
 * Return: nothing
 */
void print_int(va_list list)
{
	int n = va_arg(list, int);

	printf("%d", n);
}

/**
 * print_float - print a float
 *
 * @list: a list of arguments pointing to the float to be printed
 *
 * Return: nothing
 */
void print_float(va_list list)
{
	float n = va_arg(list, double);

	printf("%f", n);
}

/**
 * print_string - print a string
 *
 * @list: a list of arguments pointing to the string to be printed
 *
 * Return: nothing
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything based on a given format string
 *
 * @format: a string of characters representing the argument types
 *
 * Description: If any argument not of type char, int, float or char * is ignored
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(list);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(list);
}
