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
	int i;
	int j;

	signal(SIGINT, ctrl_c);
	while (status)
	{
		status = isatty(0);

		if (status == 1)
			write(1, "#cisfun$ ", 9);

		line = func_read();
		if (line == NULL)
			return (0);
		i = 0;
		j = 0;
		while (line[j] != '\0')
		{
			if (line[i] == ' ')
			{
			i++;
			}
			j++;
		}
		printf("%d\n", i);
		if (line[i] == '\0')
		{
		free(line);
		continue;
		}
		if (_strcmp(line, "exit") == 0)
		{
			free(line);
			exit(0);
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
