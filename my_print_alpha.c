/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_print_alpha.c
*/

#include "include/prototype.h"
#include <unistd.h>


int my_print_alpha(void)
{
    char i = 'a';

    while (i <= 'z') {
        write(1, (void*)&i, 1);
        i++;
    }
    return 0;
}

int main()
{
    my_print_alpha();
}