/*
** EPITECH PROJECT, 2021
** fs_get_number_from_first_line.c
** File description:
** fs get number from first line
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "my.h"
#include "bsq.h"

int fs_get_number_from_first_line(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size = 0;
    char *buffer = NULL;

    if (fd != -1) {
        size = fs_length_first_line(filepath);
        buffer = malloc(sizeof(char) * size + 1);
        if (read(fd, buffer, size) != -1) {
            buffer[size] = '\0';
            if (my_getnbr(buffer) > 0) {
                return (my_getnbr(buffer));
            }
        }
    }
    return (-1);
}