/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** pop_front
*/

#include "my.h"

List_t pop_front(List_t list_a)
{
    List_Element_t *tmp = list_a;

    tmp = list_a->next;
    return tmp;
}