/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_print_comb.c
*/

#include "include/prototype.h"

int print_number(int a, int b, int c)
{
    if (a == 7 && b == 8 && c == 9) {
        my_putchar(a + '0');
        my_putchar(b + '0');
        my_putchar(c + '0');
    } else {
        my_putchar(a + '0');
        my_putchar(b + '0');
        my_putchar(c + '0');
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;

    for (a = 0;a <= 7; a++) {
        for (b = 0;b <= 8; b++) {
            for (c = 0;c <= 9; c++){
                if (a == b || a == c || b == c) {
                    continue;
                } else{
                    print_number(a,b,c);
                }
            }
        }
    }
}

int main()
{
    my_print_comb();
}