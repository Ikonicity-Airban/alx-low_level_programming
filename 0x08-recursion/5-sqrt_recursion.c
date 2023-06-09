/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: number to take square root of
 * @guess: current guess for the square root
 *
 * Return: the square root of n if it is a natural number, or -1 otherwise
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to take square root of
 *
 * Return: the square root of n if it is a natural number, or -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}
