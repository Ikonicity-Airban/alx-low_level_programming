#include<unistd>

/**
 * _putchar - writes the character c to the stdout
 * @c: The character to print
 * Return: return on sucess 1.
 * on error, -1 is returned and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1)); 
}
