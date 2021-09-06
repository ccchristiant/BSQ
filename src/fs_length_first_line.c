/*
** EPITECH PROJECT, 2021
** fs_length_first_line.c
** File description:
** length of first line
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "bsq.h"

int fs_length_first_line(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat info;
    int size = 0;
    char *buffer = NULL;
    int i = 0;

    if (fd != -1) {
        if (stat(filepath, &info) == 0)
            size = info.st_size;
        buffer = malloc(sizeof(char) * size + 1);
        if (read(fd, buffer, size) != -1) {
            buffer[size] = '\0';
            while (buffer[i] != '\n')
                i++;
            close(fd);
            return (i);
        }
    }
    return (-1);
}
