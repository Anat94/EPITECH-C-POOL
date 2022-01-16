/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_putstr.c
*/

#include "include/prototype.h"

int my_putstr(char const *str)
{
    int carac = 0;

    while (str[carac] != '\0')
    {
        my_putchar(str[carac]);
        carac += 1;
    }
}