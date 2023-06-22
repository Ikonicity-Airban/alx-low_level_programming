#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, separated by a given string
 * @separator: the separator to use between numbers (or NULL)
 * @n: the number of integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
