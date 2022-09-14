#include "main.h"

/**
 *_isalpha - Shows 1 if input is letter.
 * Otherwise shows 0.
 *
 * @c: The character is ASCII Code
 *
 *Return: 1 for letters. Otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
