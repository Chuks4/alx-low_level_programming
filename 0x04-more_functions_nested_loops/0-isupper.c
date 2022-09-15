#include "holberton.h"

/**
 * main - check the code
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c);
int main(void)
{
char c;
c = 'A';
putchar("%c: %d\n", c, _isupper(c));
c = 'a';
putchar("%c: %d\n", c, _isupper(c));
return (0);
}
