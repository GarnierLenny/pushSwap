/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** permute
*/

#include "my.h"

List_t p_option(List_t  list_a, List_t list_b, int x)
{
    if (x == 0) {
        list_a = pop_front( list_a);
        return  list_a;
    }
    list_b = push_front( list_b,  list_a->value);
    return  list_b;
}