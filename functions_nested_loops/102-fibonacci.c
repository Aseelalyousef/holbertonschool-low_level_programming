#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long int num1 = 1, num2 = 2, next;

	printf("%ld, %ld", num1, num2);

	for (count = 3; count <= 50; count++)
	{
		next = num1 + num2;
		printf(", %ld", next);
		num1 = num2;
		num2 = next;
	}

	printf("\n");
	return (0);
}
