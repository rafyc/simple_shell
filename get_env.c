#include "simpleshell.h"

/**
 * get_env - get the environment variable
 * @getcmd: command
 * Return: the environment variable
 */

char *get_env(char *getcmd)
{
	int i, size;

	size = _strlen(getcmd);
	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], getcmd, size) == 0)
			return (environ[i] + size + 1);
	}
	return (NULL);
}
