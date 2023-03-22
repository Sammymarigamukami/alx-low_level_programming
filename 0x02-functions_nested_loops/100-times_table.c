#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the highest multiple to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				printf("%d", result);
			else if (result < 10)
				printf("   %d", result);
			else if (result < 100)
				printf("  %d", result);
			else
				printf(" %d", result);
		}

		printf("\n");
	}
}
