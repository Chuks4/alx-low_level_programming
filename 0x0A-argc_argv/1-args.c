#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments to be printed
 *
 * @argv: arguments to be printed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
