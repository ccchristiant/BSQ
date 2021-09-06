/*
** EPITECH PROJECT, 2021
** search_square.c
** File description:
** search_square function
*/

#include "my.h"
#include "struct.h"
#include "bsq.h"

void search_square_loop_cond(max_coord *m, int **map_array)
{
    if (map_array[m->i][m->j] > m->max) {
        m->max = map_array[m->i][m->j];
        m->i_max = m->i;
        m->j_max = m->j;
    }
}

void search_square(int nb_first_line, int length_lines, int **map_array,
                   char *map)
{
    max_coord m;

    m.max = 0;
    m.i_max = 0;
    m.j_max = 0;
    for (int i = 1; i < nb_first_line; i++) {
        m.i = i;
        for (int j = 1; j < length_lines; j++) {
            m.j = j;
            search_square_loop_cond(&m, map_array);
        }
    }
    if (m.max > 1)
        put_square(m, length_lines, map);
    else
        put_x(nb_first_line, length_lines, map);
    my_putstr(map);
}
