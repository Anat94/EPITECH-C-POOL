/*
** EPITECH PROJECT, 2021
** CPOOL
** File description:
** my_strlen.c
*/

#include "include/prototype.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] !=  '\0') {
        i++;
    }
    return i;
}

int main()
{
    my_strlen("hello");
}