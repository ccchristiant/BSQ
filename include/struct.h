/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** ctran
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct linked_list
{
    int data;
    struct linked_list *next;
}linked_list_t;

typedef struct two_lists
{
    linked_list_t *l_a;
    linked_list_t *l_b;
}lists;

typedef struct numbers
{
    int nb_stages;
    int nb_negatives;
}nbs;

typedef struct max_and_coord
{
    int max;
    int i;
    int j;
    int i_max;
    int j_max;
}max_coord;

#endif
