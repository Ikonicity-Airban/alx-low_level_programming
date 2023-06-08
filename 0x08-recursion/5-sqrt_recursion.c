#include"main.h"

/**
 * _sqrt_recursion - Compute the
 * natural square root of a number recursively
 * @n: The number to compute the square root of
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int i;
	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (_sqrt_recursion(n - 1));
}

