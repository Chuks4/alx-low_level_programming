#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments to be printed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, num, res = 0;
	char *flag;


	if (argc < 2)
	{
		printf("0\n");
		return (0);
	};

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &flag, 10);

		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			res += num;
		}
	}

	printf("%d\n", res);
	return (0);
}
