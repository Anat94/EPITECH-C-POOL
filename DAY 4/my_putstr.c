/*
** EPITECH PROJECT, 2021
** CPOOL
** File description:
** my_putstr.c
*/

#include "include/prototype.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

int main()
{
    my_putstr("TEST fonction my_putstr\n");
}