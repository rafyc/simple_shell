#include "simpleshell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - main function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(char **grid)
{
	int i;
  int height;
  
  for (i = 0; grid[i] != '\n', i++)
    height = grid[i];

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
