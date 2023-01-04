#include "main.h"

/**
 * _strchr - function that locates a char in a string
 *
 * @s: pointer to string array input
 * @c: char to locate input array
 *
 * Return: first occurence of char or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
