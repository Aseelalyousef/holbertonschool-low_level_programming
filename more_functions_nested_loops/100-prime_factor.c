#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143UL;
	long div = 2;
	long max_prime;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			max_prime = n;
			n /= div;
			if (n == 1)
			{
				printf("%ld\n", max_prime);
				break;
			}
		}
	}
	return (0);
}
