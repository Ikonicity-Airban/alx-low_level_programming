#include"main.h"

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int amount;
	int cents[] = {25, 10, 5, 2, 1};
	unsigned int change = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
		while (amount > 0)
		{
			if (amount < cents[i])
			{
				i++;
				continue;
			}
			amount -= cents[i];
			change++;
		}
		printf("%d\n", change);
	}
	return (0);
}
