/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_is_neg.c
*/

#include "include/prototype.h"

int my_is_neg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
}

int main()
{
    my_is_neg(-2);
    my_is_neg(0);
    my_is_neg(3);
}