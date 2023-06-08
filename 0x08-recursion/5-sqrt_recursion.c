#include"main.h"

/**
 * sqrtRecursive - A function
 * Description: A function that prints
 * the natural number of the given int
 * @x: int
 * @low: int lowest number
 * @high: int high number
 * Return: Returns -1 error or int
 */

int sqrtRecursive(int x, int low, int high)
{
	int mid, square;

	if (low > high)
	{
		return (-1);
	}
	mid = (low + high) / 2;
	square = mid * mid;

	if (square == x)
	{
		return (mid);
	}
	else if (square < x)
	{
		return (sqrtRecursive(x, mid + 1, high));
	}
	else
	{
		return (sqrtRecursive(x, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - Entry point
 * Description: A function that finds the square root of nunber
 * @n: the number.
 * Return: return the natural sqrt or -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrtRecursive(n, 0, n));
}
