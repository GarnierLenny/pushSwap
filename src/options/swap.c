/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** switch
*/

#include "my.h"

List_t s_option(List_t list_a)
{
    int x = 0;

    if (list_len(list_a) < 2)
        return list_a;
    x = list_a->value;
    list_a->value = list_a->next->value;
    list_a->next->value = x;
    return list_a;
}

List_t sc_option(List_t list_a, List_t list_b, int x)
{
    s_option(list_a);
    s_option( list_b);
    if (x == 0)
        return list_a;
    return  list_b;
}