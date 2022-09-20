#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @arr: input array
 * @n: input n elements
 *
 * Return: Null
 */
void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(arr + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
