#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, separated by a given string
 * @separator: the separator to use between strings (or NULL)
 * @n: the number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
