#include <stdio.h>

/**
 * main - prints its name followed by a new line.
 *
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: return 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
