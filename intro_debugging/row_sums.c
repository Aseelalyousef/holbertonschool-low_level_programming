/**
 * row_sum - calculates the sum for a specific row
 * @row: row index
 * @cols: number of columns
 *
 * Return: sum of the row elements
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - calculates the total sum of all rows
 * @rows: number of rows
 * @cols: number of columns
 *
 * Return: total sum of all elements
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
	{
		total += row_sum(r, cols);
	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
