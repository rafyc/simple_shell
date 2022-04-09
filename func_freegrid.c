#include "simpleshell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - main function
 * @grid: address of the two dimensional grid
 * Return: void.
 */
void free_grid(char **grid)
{
	int i = 0;
	int height;

	while (grid[i])
		i++;

	height = i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
