#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int length, m;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (m = 0; src[m] != '\0'; m++, length++)
	{
		dest[length] = src[m];

	}
	dest[length] = '\0';
	return (dest);
}
