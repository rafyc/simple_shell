#include "simpleshell.h"

/**
  * func_split - tokenize the line read
  * @line: line to be tokenize
  * Return: array of tokens
  */

char **func_split(char *line)
{
	int size = 1024;
	int i = 0;
	char **tab_token = malloc(size * sizeof(char *));
	char *token;

	if (tab_token == NULL)
	{
		perror("Error : malloc");
		return (0);
	}

	token = strtok(line, " ");
	while (token != NULL)
	{
		tab_token[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	tab_token[i] = NULL;

	return (tab_token);
}
