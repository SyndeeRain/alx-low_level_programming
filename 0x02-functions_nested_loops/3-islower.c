#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @c: The character
 *
 * Return: 1 jf letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
