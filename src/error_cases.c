/*
** EPITECH PROJECT, 2020
** B-CPE-110-run-1-1-pushswap-lenny.garnier
** File description:
** error_cases
*/

#include "my.h"

int is_valid(char c)
{
    if ((c >= '0' && c <= '9') || c == '-')
        return 1;
    return 0;
}

int error_cases(int ac, char **av)
{
    if (ac == 1)
        return 84;
    for (int arg = 1; av[arg] != NULL; arg++) {
        for (int i = 0; av[arg][i] != '\0'; i++)
            if (is_valid(av[arg][i]) == 0)
                return 84;
    }
    return 0;
}