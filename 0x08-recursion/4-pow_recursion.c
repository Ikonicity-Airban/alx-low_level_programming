#include"main.h"

/**
 * _pow_recursion - A function
 * Description: A funxtion similar to pow function
 * that return the power of x raised to y
 * @x: the number
 * @y: the power
 * Return: return x to y power or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
