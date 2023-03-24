#include <stdio.h>
void print_line(int n)
{
	if (n <= 0)		// If n is less than or equal to 0, only print a newline character
	{
		_putchar('\n');
	}
	else			// Otherwise, print the specified number of underscores, followed by a newline character
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}

