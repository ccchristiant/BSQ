/*
** EPITECH PROJECT, 2021
** put_square.c
** File description:
** put_square function
*/

#include "struct.h"

void put_square(max_coord m, int length_lines, char *map)
{
    for (int i = m.i_max; i > m.i_max - m.max; i--)
        for (int j = m.j_max; j > m.j_max - m.max; j--)
            map[i * length_lines + j] = 'x';
}