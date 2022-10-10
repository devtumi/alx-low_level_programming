#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed followed by a new line
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: return 0, success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
