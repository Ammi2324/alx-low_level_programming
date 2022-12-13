#include <stdio.h>

/**
 * main - prints lowecase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alr;

	for (alr = 'z'; alr <= 'a'; alr--)
	putchar(alr);
	putchar('\n');

	return (0);
}
