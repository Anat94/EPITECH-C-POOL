/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_put_nbr.c
*/

#include "include/prototype.h"

int error(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return 0;
    }
}

int my_put_nbr(int nb)
{
    int modulo;
    error(nb);
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            modulo = (nb % 10);
            nb = (nb - modulo) / 10;
            my_put_nbr(nb);
            my_putchar('0' + modulo);
        } else
            my_putchar('0' + nb % 10);
    }
}
