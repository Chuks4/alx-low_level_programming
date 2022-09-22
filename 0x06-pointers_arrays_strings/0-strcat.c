#include <string.h>
#include <main.h>

/**
 * _strcat - concates two strings
 * @dest: string to be concatenated
 * @src: another string to be concatenated
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);
{
	int *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}
