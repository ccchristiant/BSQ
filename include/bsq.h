/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** ctran
*/

#ifndef BSQ_H_
#define BSQ_H_

#include "struct.h"

int fs_open_file(char const *filepath);
int fs_length_first_line(char const *filepath);
int fs_get_number_from_first_line(char const *filepath);
char *load_file_in_mem(char const *filepath);
int line_length(char *map);
int check_min(int **map_array, int i, int j);
void update_map(int nb_first_line, int length_lines, int **map_array);
void put_square(max_coord m, int length_lines, char *map);
void put_x(int nb_first_line, int length_lines, char *map);
void search_square(int nb_first_line, int length_lines, int **map_array,
                   char *map);
void bsq(char *map, int nb_first_line, int length_lines);

#endif
