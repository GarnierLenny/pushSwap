/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** list_len
*/

#include "my.h"

int list_len(List_t list_a)
{
    int size = 0;

    if (is_empty(list_a) == false) {
        while ( list_a != NULL) {
            size += 1;
            list_a = list_a->next;
        }
    }
    return size;
}