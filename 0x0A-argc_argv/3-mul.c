#include<stdio.h>
#include<stdlib.h>

/**
 * main -Entry point.
 * Description: A program that multiply two numbers.
 * passed as argument.
 * @argc: number program arguments.
 * @argv: A vector containing all program arguments.
 * Return: returns (0) for success and (1) for failure.
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", result);
	return (0);
}
