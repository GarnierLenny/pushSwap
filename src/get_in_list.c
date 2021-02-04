/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** get_in_list
*/

#include "my.h"

List_t get_in_list(List_t list_a, char **av)
{
    for (int i = 1; av[i] != NULL; i++)
        list_a = push_back(list_a, gnb(av[i]));
    return list_a;
}