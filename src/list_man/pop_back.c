/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** pop_back
*/

#include "my.h"

List_t pop_back(List_t list_a)
{
    List_Element_t *tmp = list_a;
    List_Element_t *bef = list_a;

    while (tmp->next != NULL) {
        bef = tmp;
        tmp = tmp->next;
    }
    bef->next = NULL;
    free(tmp);
    return list_a;
}