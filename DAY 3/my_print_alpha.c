/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_print_alpha.c
*/

#include "include/prototype.h"

int my_print_alpha(void)
{
    int i = 97;

    while (i <= 122) {
        my_putchar(i);
        i++;
    }
    return 0;
}

int main()
{
    my_print_alpha();
}