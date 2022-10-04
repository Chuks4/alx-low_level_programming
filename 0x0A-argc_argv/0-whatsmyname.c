#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the program name
 * @argc:  returns number of command-line arguments
 * @argv:  return the command-line arguments used while running the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
