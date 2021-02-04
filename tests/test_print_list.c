/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** test_print_list
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(print_list, disp_list, .init = cr_redirect_stdout)
{
    char *av[] = { "./push_swap", "5", "2", "3", 0 };
    List_t list_a = NULL;

    list_a = get_in_list(list_a, av);
    print_list(list_a);
    fflush(stdout);
    cr_assert_stdout_eq_str("5 2 3 \n");
}