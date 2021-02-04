/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** push_back
*/

#include "my.h"

List_t push_back(List_t list_a, int x)
{
    List_Element_t *element;
    List_Element_t *tmp;

    element = malloc(sizeof(*element));
    element->next = NULL;
    element->value = x;
    if (is_empty(list_a) == true)
        return element;
    tmp = list_a;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = element;
    return list_a;
}