#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
