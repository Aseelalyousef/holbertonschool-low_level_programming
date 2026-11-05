#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci terms <= 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1, num2 = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum += next;

		num1 = num2;
		num2 = next;
	}

	printf("%ld\n", sum);
	return (0);
}
