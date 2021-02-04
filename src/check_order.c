/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** check_order
*/

#include "my.h"

int check_order(List_t list_a)
{
    int nb = 0;
    List_Element_t *tmp = list_a;

    while (tmp->next != NULL) {
        nb = tmp->value;
        tmp = tmp->next;
        if (tmp->value < nb)
            return 0;
    }
    return 1;
}