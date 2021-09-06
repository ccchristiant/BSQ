/*
** EPITECH PROJECT, 2021
** line_length.c
** File description:
** line_length function
*/

int line_length(char *map)
{
    int i = 0;

    for (; map[i] != '\n'; i++);
    return i + 1;
}