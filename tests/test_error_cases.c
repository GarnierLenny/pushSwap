/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** test_error_cases
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(error_cases, test_ec_1)
{
    char *av[] = { "./push_swap", "5", "3", "2", 0 };

    cr_assert_eq(error_cases(4, av), 0);
}

Test(error_cases, test_ec_2)
{
    char *av[] = { "./push_swap", "5", "3", "a", 0 };

    cr_assert_eq(error_cases(4, av), 84);
}

Test(error_cases, test_ec_3)
{
    char *av[] = { "./push_swap", 0 };

    cr_assert_eq(error_cases(1, av), 84);
}