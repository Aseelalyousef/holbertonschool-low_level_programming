#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long f1_head = 0, f1_tail = 1;
	unsigned long f2_head = 0, f2_tail = 2;
	unsigned long next_head, next_tail;
	unsigned long limit = 1000000000;

	printf("%lu, %lu", f1_tail, f2_tail);

	for (count = 3; count <= 98; count++)
	{
		if (f1_tail + f2_tail >= limit || f1_head > 0 || f2_head > 0)
		{
			next_head = f1_head + f2_head + ((f1_tail + f2_tail) / limit);
			next_tail = (f1_tail + f2_tail) % limit;

			f1_head = f2_head;
			f1_tail = f2_tail;
			f2_head = next_head;
			f2_tail = next_tail;

			printf(", %lu%09lu", f2_head, f2_tail);
		}
		else
		{
			next_tail = f1_tail + f2_tail;
			f1_tail = f2_tail;
			f2_tail = next_tail;

			printf(", %lu", f2_tail);
		}
	}
	printf("\n");
	return (0);
}
