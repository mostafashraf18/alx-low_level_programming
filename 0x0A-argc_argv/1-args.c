#include <stdio.h>

/**
 * main - prints  numbers.
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
