/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    List_t list_a = new_list();
    List_t list_b = new_list();

    if (error_cases(ac, av) == 84)
        return 84;
    list_a = get_in_list(list_a, av);
    if (check_order(list_a) == 1) {
        my_printf("\n");
        return 0;
    }
    sort_v2(list_a, list_b);
    my_printf("\n");
    return 0;
}