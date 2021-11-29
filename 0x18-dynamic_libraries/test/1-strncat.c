#include "main.h"

/**
 *_strncat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int longdest;
	int j;

	for (longdest = 0; dest[longdest] != '\0'; longdest++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[longdest] = src[j];
		longdest++;
	}
	dest[longdest] = '\0';
	return (dest);
}
