#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: number of parameters to sum
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	/* iterate through all parameter values*/
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
