#include "simpleshell.h"

/**
  * _printenv - function that print the environment variables
  */

void _printenv(void)
{
	int i;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
}
