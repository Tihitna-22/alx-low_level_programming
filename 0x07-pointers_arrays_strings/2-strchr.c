#include "main.h"

/**
 *_strchr - find the first occurence of a char.
 *@c: the char to be found.
 *@s: the string to search in.
 *Return: a pointer to the first occurence of char c in s or NULL.
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			break;
		j++;
	}
	if (s[j] == c)
		return (s + j);
	return (0);
}
