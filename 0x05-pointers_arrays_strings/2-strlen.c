#include "main.h"

/**
 * _strlen - counts the number of characters in a string.
 *
 * @s: inputs string.
 *
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
