#include  "simpleshell.h"

/**
  * func_read - function that reads the stdin
  * Return: line if succesful or NULL if failed
  */

char *func_read(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t len = 0;

	len = getline(&line, &size, stdin);
	if (len == -1)
	{
		free(line);
		return (NULL);
	}
	if (line[len - 1] == '\n')
		line[len - 1] = '\0';

	return (line);
}
