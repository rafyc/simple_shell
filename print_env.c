#include "simpleshell.h"

/**
  * _printenv - function that print the environment variables
  */

void _printenv(void)
{
	int i, size;

	for (i = 0; environ[i]; i++)
	{
		size = _strlen(environ[i]);
		write(1, environ[i], size);
		write(1, "\n", 1);
	}
}
