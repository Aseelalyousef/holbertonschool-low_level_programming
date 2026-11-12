#include <stdio.h>

/**
 * main - Entry point for the Simple Calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	double a, b;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			break;

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choice == 1)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%lf", &b) != 1)
				break;
			printf("Result: %g\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%lf", &b) != 1)
				break;
			printf("Result: %g\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%lf", &b) != 1)
				break;
			printf("Result: %g\n", a * b);
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
