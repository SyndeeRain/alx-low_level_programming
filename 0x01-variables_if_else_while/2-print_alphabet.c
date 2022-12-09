#include <stdio>

/**
 * main - prints alpha in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 'a'; i <= 'z'; i++);
	{
		putchar(alp[i]);
	}
	{
	putchar('\n');
	}
	return (0);
}
