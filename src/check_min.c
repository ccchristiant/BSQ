/*
** EPITECH PROJECT, 2021
** check_min.c
** File description:
** check_min function
*/

int check_min(int **map_array, int i, int j)
{
    int min = map_array[i][j - 1];

    if (map_array[i - 1][j] < min)
        min = map_array[i - 1][j];
    if (map_array[i - 1][j - 1] < min)
        min = map_array[i - 1][j - 1];
    return min;
}