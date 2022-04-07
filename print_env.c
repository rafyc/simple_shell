#include "simpleshell.h"

/**
  * _printenv - function that print the environment variables
  */

void _printenv(void)
{
	int i;
	int lengh;

	for (i = 0; environ[i]; i++)
	{
		lengh = _strlen(environ[i]);
		write(1, environ[i], lengh);
		write(1, "\n", 1);
	}
}
