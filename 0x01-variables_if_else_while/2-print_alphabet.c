#include <stdio.h>

/**
 * main - displays alphabet in lower case.
 *
 * Return: - Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
		putchar('\n');
		return (0);
}
