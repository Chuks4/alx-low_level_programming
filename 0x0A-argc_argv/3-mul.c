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
	 if (argc < 3)
	 {
                printf("Error\n");
                return (1);
	 }

	int num1 = strtol(argv[1], NULL, 10);
	int num2 = strtol(argv[2], NULL, 10);
	int res = num1 * num2;

	printf("%d\n", res);

	return (0);
}

