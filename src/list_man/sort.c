/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** sort
*/

#include "my.h"

List_t check_swap_a(List_t list_a)
{
    if (list_len(list_a) > 1) {
        if (list_a->value > list_a->next->value) {
            my_printf(" sa");
            list_a = s_option(list_a);
        }
    }
    return list_a;
}

List_t check_swap_b(List_t list_b)
{
    if (list_len( list_b) > 1) {
        if ( list_b->value <  list_b->next->value) {
            list_b = s_option( list_b);
            my_printf(" sb");
        }
    }
    return  list_b;
}

List_t check_swap_a_count(List_t list_a, int *count)
{
    if (list_a->value > list_a->next->value) {
        list_a = s_option(list_a);
        my_printf("sa");
        *count = 1;
    }
    return list_a;
}

int sort_v2(List_t list_a, List_t list_b)
{
    int count = 0;

    list_a = check_swap_a_count(list_a, &count);
    for (; ll(list_a) > ll( list_b);  list_b = po(list_a, list_b, 1),
        list_a = po(list_a, list_b, 0)) {
        count == 0 ? my_printf("pb") : my_printf(" pb");
        count = 1;
    }
    for (;  list_b != NULL; list_a = check_swap_a(list_a),
        list_b = check_swap_b( list_b)) {
        if (check_order(list_a) == 1) {
            list_a = p_option( list_b, list_a, 1);
            list_b = p_option( list_b, list_a, 0);
            my_printf(" pa");
        } else {
            list_b = p_option(list_a, list_b, 1);
            list_a = p_option(list_a, list_b, 0);
            my_printf(" pb");
        }
    }
    return 0;
}

int sort(List_t list_a, List_t list_b)
{
    while (list_a != NULL) {
        if (is_smallest(list_a) == 1) {
            list_b = p_option(list_a, list_b, 1);
            list_a = p_option(list_a, list_b, 0);
            my_printf("pb ");
        } else {
            list_a = rr_option(list_a);
            my_printf("rra ");
        }
    }
    while ( list_b != NULL) {
        list_a = p_option( list_b, list_a, 1);
        list_b = p_option( list_b,  list_a, 0);
        if (list_len( list_b) == 0)
            my_printf("pa");
        else
            my_printf("pa ");
    }
    my_printf("\n");
    print_list(list_a);
    return 0;
}