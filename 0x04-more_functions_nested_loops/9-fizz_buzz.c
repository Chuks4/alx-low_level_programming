#include <stdio.h>
/**
 * main - Fizz Buzz cod
 *
 * Return: void
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", num);
		}
		if (num != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
		return (0);
}
