#include"main.h"

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
	int sum, i = 1;

	while (argv[i] < argc)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
