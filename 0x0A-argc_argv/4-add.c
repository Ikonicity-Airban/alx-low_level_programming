#include"main.h"

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - Entry point.
 * Description: A program that adds numbers passed
 * as argument.
 *
 * @argc: holds the number of arguments passed.
 * @argv: array pointer that holds the arguments passed.
 *
 * Return: return (0) for success.
 */

int main(int argc, char **argv)
{
	int sum, i;

	/* checks if no argument was passed to the program */
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isNum(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
