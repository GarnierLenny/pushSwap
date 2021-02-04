/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** test_check_order
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(check_order, is_list_c_1)
{
    char *av[] = { "./push_swap", "5", "2", "3", 0 };
    List_t list_a = NULL;

    list_a = get_in_list(list_a, av);
    cr_assert_eq(check_order(list_a), 0);
}

Test(check_order, is_list_c_2)
{
    char *av[] = { "./push_swap", "1", "2", "3", 0 };
    List_t list_a = NULL;

    list_a = get_in_list(list_a, av);
    cr_assert_eq(check_order(list_a), 1);
}