#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - print lowercase letters
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
