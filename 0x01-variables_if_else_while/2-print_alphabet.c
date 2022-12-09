#include <stdio.h>

/**
 * main - prints alpha in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++);
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
