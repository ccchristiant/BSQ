/*
** EPITECH PROJECT, 2021
** put_x.c
** File description:
** put_x function
*/

int put_x_child_loop(int length_lines, char *map, int i)
{
    for (int j = 0; j < length_lines; j++)
        if (map[i * length_lines + j] == '.')
        {
            map[i * length_lines + j] = 'x';
            return 1;
        }
    return 0;
}

void put_x(int nb_first_line, int length_lines, char *map)
{
    for (int i = 0; i < nb_first_line; i++)
        if (put_x_child_loop(length_lines, map, i) == 1)
            return;
}