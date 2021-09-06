/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** bsq main
*/

#include "bsq.h"
#include <stddef.h>

int nb_lines(char *map)
{
    int nb_ret = 0;

    for (int i = 0; map[i] != '\0'; i++)
        nb_ret += (map[i] == '\n');
    return nb_ret;
}

int recup_file_info(char *filepath)
{
    char *file = load_file_in_mem(filepath);
    int nb_first_line = 0;
    int length_first_line = 0;
    int length_lines = 0;

    if (file == NULL)
        return 84;
    nb_first_line = fs_get_number_from_first_line(filepath);
    length_first_line = fs_length_first_line(filepath);
    if (nb_first_line == -1 || length_first_line == -1 ||
        nb_lines(&file[length_first_line + 1]) != nb_first_line)
        return 84;
    length_lines = line_length(&file[length_first_line + 1]);
    bsq(&file[length_first_line + 1], nb_first_line, length_lines);
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 2) {
        return (recup_file_info(av[1]));
    }
    return 84;
}
