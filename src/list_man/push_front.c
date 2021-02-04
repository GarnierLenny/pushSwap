/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** push_front
*/

#include "my.h"

List_t push_front(List_t list_a, int x)
{
    List_Element_t *element;

    element = malloc(sizeof(*element));
    element->next = list_a;
    element->value = x;
    return element;
}