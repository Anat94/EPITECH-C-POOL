/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_putchar.c
*/

#include <unistd.h>

void my_putchar (char c)
{
    write(1, (void*)&c, 1);
}