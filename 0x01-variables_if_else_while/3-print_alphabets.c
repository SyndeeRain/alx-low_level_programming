#include <stdio.h>
/**
 * main - prints alpha in lower and upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lwr;
	char upr;
	
	for (lwr = 'a'; lwr <= 'z'; lwr++)
		putchar(lwr);
	for (upr = 'A'; upr <= 'Z'; upr++)
		putchar(upr);

	putchar('\n');
	return (0);
}
