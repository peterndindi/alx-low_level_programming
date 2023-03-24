void print_diagonal(int n)
{
	if (n <= 0)		// If n is less than or equal to 0, only print a newline character
	{
		_putchar('\n');
	}
	else			// Otherwise, print the specified number of backslashes, starting with 1 and incrementing by 1 each time, followed by a newline character
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
