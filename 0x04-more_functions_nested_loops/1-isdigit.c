#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: inputs character
 *
 * Return: returns 0 if input is digit,
 * otherwise returns 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
