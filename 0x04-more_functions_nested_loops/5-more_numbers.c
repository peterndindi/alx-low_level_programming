void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)		// If the number is 2 digits long, print the first digit first
            {
                _putchar('0' + (j / 10));
            }
            _putchar('0' + (j % 10));	// Always print the last digit
        }

        _putchar('\n');		// Move to the next line
    }
}
