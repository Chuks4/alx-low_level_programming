#include <stdlib.h>
#include <stdio.h>

/**
 * main -multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments to be printed
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	for (i = 1; i < argc; i++)
	{
		res *= strtol(argv[i], NULL, 10);
	}
	printf("%d\n", res);
	if (argc != 2)
		printf("Error\n");
	return (0);
}

