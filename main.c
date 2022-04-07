#include "simpleshell.h"

/**
  * main - start the shell
  * Return: 1
  */

int main(void)
{
	int status = 1;
	char *line;
	char **args;

	signal(SIGINT, ctrl_c);
	while (status)
	{
		status = isatty(0);

		if (status == 1)
			write(1, "#cisfun$ ", 9);

		line = func_read();
		if (line == NULL)
			return (0);

		if (_strcmp(line, "exit") == 0)
		{
			free(line);
			return (0);
		}
		if (_strcmp(line, "env") == 0)
		{
			_printenv();
			free(line);
			continue;
		}
		args = func_split(line);
		if (args == NULL)
		{
			free(line);
			free(args);
			continue;
		}
		status = func_exec(args);
		free(line);
		free(args);
	}
	return (0);
}
