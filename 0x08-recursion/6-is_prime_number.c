#include "main.h"

/**
 * isPrimeRecursive - main recursion function
 * @n: number to check
 * @i: the starting position
 * Return: return 0 or 1;
 */
int isPrimeRecursive(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrimeRecursive(n, i + 1));
}

/**
 * is_prime_number - A prime checker
 * @n: int parameter
 * Return: retun 1 if is prime or return -1.
 */

int is_prime_number(int n)
{
	return (isPrimeRecursive(n, 2));
}
