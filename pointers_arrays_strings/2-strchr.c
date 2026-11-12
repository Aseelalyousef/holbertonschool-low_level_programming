#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == '\0')
		{
			break;
		}
	}

	return (0);
}
