/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** print_list
*/

#include "my.h"

void print_list(List_t list_a)
{
    if (is_empty(list_a) == true)
        return;
    while ( list_a != NULL) {
        my_printf("%d ", list_a->value);
        list_a =  list_a->next;
    }
    my_printf("\n");
}