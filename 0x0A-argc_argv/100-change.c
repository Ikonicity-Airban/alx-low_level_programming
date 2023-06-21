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
	int amount = atoi(argv[2]);
	int cents[5] = {25, 10, 5, 2};
	unsigned int change = 0;

	if (argc != 2)
	{
		printf("Error\n"); 
		return (1);
	}
	else
	{
		while(amount < 0)
		{
			if (amount < *cents)
			{
				*cents++;
				continue;
			}
			amount -= *cents;
			change++;
		}
		printf("%d", change);
	}
	return (0);
}
