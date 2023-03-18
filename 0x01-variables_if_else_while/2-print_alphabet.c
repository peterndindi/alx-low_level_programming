/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
