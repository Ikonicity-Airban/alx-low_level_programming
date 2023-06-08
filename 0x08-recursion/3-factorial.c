#include"main.h"

/**
 * factorial - A function that returns
 * the factorial of a number.
 * @n: the number type integer.
 * Return: return an the factorial of n
 * for n > 0 and -1 for n less than 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
