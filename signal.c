#include "simpleshell.h"

/**
  * ctrl_c -  Handles ctrl + c
  * @signal: signal
  */

void ctrl_c(int signal)
{
	(void)signal;
	printf("\n");
	write(1, "#cisfun$ ", 9);
}
