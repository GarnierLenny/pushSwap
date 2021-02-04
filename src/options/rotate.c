/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** rotate
*/

#include "my.h"

int is_smallest(List_t list_a)
{
    List_Element_t *tmp = list_a;
    int x = tmp->value;

    while (tmp != NULL) {
        if (tmp->value < x)
            return 0;
        tmp = tmp->next;
    }
    return 1;
}

List_t rr_option(List_t list_a)
{
    List_Element_t *tmp = list_a;

    while (tmp->next != NULL)
        tmp = tmp->next;
    list_a = push_front(list_a, tmp->value);
    list_a = pop_back(list_a);
    return list_a;
}

List_t r_option(List_t list_a)
{
    int x = 0;
    List_Element_t *tmp;

    tmp = list_a;
    while (tmp->next != NULL)
        tmp = tmp->next;
    x = list_a->value;
    list_a->value = tmp->value;
    tmp->value = x;
    return list_a;
}