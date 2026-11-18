#include "main.h"
#include <stdlib.h>

/**
 * _is_digit - checks if a string consists only of digits
 * @s: string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _is_digit(char *s)
{
	int i = 0;

	if (!s || s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_error - prints Error followed by a newline and exits with status 98
 */
void print_error(void)
{
	char *err = "Error\n";
	int i = 0;

	while (err[i])
	{
		_putchar(err[i]);
		i++;
	}
	exit(98);
}

/**
 * print_result - prints the resulting array of digits
 * @res: integer array containing product digits
 * @len: length of the array
 */
void print_result(int *res, int len)
{
	int i, started = 0;

	for (i = 0; i < len; i++)
	{
		if (res[i] != 0)
			started = 1;
		if (started)
			_putchar(res[i] + '0');
	}
	if (!started)
		_putchar('0');
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers passed as arguments
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int len1, len2, total_len, i, carry, d1, d2, *res;

	if (argc != 3 || !_is_digit(argv[1]) || !_is_digit(argv[2]))
		print_error();

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	total_len = len1 + len2;
	res = malloc(sizeof(int) * total_len);
	if (!res)
		return (1);

	for (i = 0; i < total_len; i++)
		res[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = argv[1][len1] - '0';
		carry = 0;
		for (len2 = _strlen(argv[2]) - 1; len2 >= 0; len2--)
		{
			d2 = argv[2][len2] - '0';
			carry += res[len1 + len2 + 1] + (d1 * d2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	print_result(res, total_len);
	free(res);
	return (0);
}
