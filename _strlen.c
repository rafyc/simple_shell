#include "simpleshell.h"

/**
 * _strlen - size of string
 * @s: string to find size
 * Return: string size
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
