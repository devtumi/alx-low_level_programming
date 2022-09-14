#include "main.h"

/**
 * print_sign - Deterines if the input is
 * greater than, less than, or greater than 0.
 *
 * @n: The input n is an integer.
 *
 * Return: 1 if greater than zero, 0 if zero
 * and -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
