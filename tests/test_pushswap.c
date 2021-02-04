/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** test_pushswap
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(sort, sorting)
{
    char *av[] = { "./push_swap", "5", "2", "3", 0 };
    List_t list_a = NULL;
    List_t list_b = NULL;

    list_a = get_in_list(list_a, av);
    cr_assert_eq(sort(list_a, list_b), 0);
}

Test(sort_v2, sorting_v2)
{
    char *av[] = { "./push_swap", "5", "2", "3", 0 };
    List_t list_a = NULL;
    List_t list_b = NULL;

    list_a = get_in_list(list_a, av);
    cr_assert_eq(sort_v2(list_a, list_b), 0);
}