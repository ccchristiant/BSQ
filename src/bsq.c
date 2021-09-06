/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** bsq function
*/

#include "bsq.h"
#include <stdlib.h>

void bsq(char *map, int nb_first_line, int length_lines)
{
    int **map_arr = malloc(sizeof(int *) * nb_first_line);

    for (int lig = 0; lig < nb_first_line; lig++) {
        map_arr[lig] = malloc(sizeof(int) * length_lines);
        for (int col = 0; col < length_lines - 1; col++)
            map_arr[lig][col] = (map[lig * length_lines + col] != 'o');
    }
    update_map(nb_first_line, length_lines, map_arr);
    search_square(nb_first_line, length_lines, map_arr, map);
    free(map_arr);
}