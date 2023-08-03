#include "main.h"

/**
 * wildcamp - compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcamp(char *sl, char *s2)
{
	if (*sl == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcamp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcamp(s1 + 1, s2) || wildcamp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcamp(s1 + 1, s2 + 1));
	}
	return (0);
}
