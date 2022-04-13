#include "simpleshell.h"

/**
  * _strcmp - function that compare two strings
  * @s1: String 1
  * @s2: String 2
  * Return: 0 if s1 = s2, negative value if s1 < s2 and positive if s1 > s2
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
