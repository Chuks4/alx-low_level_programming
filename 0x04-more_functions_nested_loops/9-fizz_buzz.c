#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i", num);
		}
	}
	putchar('\n')
		return (0);
}
