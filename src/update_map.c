/*
** EPITECH PROJECT, 2021
** update_map.c
** File description:
** update_map function
*/

#include "bsq.h"

void update_map_child_loop(int length_lines, int **map_array, int i)
{
    int min = 0;

    for (int j = 1; j < length_lines; j++)
        if (map_array[i][j] != 0) {
            min = check_min(map_array, i, j);
            map_array[i][j] += (min != 0) ? min : 0;
        }
}

void update_map(int nb_first_line, int length_lines, int **map_array)
{
    for (int i = 1; i < nb_first_line; i++)
        update_map_child_loop(length_lines, map_array, i);
}