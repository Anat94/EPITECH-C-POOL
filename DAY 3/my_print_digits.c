/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_print_digits.c
*/

#include "include/prototype.h"

int my_print_digits(void)
{
    int i = 0;

    while (i <= 9) {
        my_putchar(i + '0');
        i++;
    }
    return 0;
}

int main()
{
    my_print_digits();
}