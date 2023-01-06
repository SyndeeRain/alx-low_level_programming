#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: characters to be checked
 *
 * Return: Always 0 (Successful)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

