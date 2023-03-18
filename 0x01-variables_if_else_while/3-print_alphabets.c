/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase, followed by
 *              a new line using the putchar function only three times.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

