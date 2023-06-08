#include"main.h"

/**
 * factorial - A function that returns
 * the factorial of a number.
 * @n: the number type integer.
 * Return: retun an int.
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
