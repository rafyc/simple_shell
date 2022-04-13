#include "simpleshell.h"

/**
  * func_exec - function that executes the commands
  * @args: list of commands
  * Return: 1
  */

int func_exec(char **args)
{
	pid_t my_pid;
	char *getcmd = args[0];
	int status;

	my_pid = fork();
	if (my_pid == -1)
	{
		perror("Error : fork");
	}

	if (my_pid == 0)
	{

		if (getcmd[0] == '/' || getcmd[0] == '.')
		{
			getcmd = args[0];
		}
		else
		{
			getcmd = get_path(args[0]);
		}

		if (args[0] == NULL)
		{
			perror("Error : no argument");
			return (0);
		}
		if (getcmd == NULL)
		{
			free(getcmd);
			free(args);
			perror("Error : execve");
			return (0);
		}
		else if (execve(getcmd, args, NULL) == -1)
				execve(getcmd, args, NULL);
	}
	else
	{
		wait(&status);
	}
	return (1);
}
