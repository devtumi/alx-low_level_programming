#include "main.h"

/**
 * print_line - function to draw astraight line
 * in the terminal.
 *
 * @n: number of times the character _ should be printed
 *
 *Return: return 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
