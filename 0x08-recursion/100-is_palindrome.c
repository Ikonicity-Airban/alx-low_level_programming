#include"main.h"

/**
 * is_palindrome_recursive - Check if a substring is a palindrome recursively
 * @s: The string to check
 * @start: The index of the first character of the substring to check
 * @end: The index of the last character of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - calculate the length of a string recursively
 * @s: pointer to the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
