/*
** EPITECH PROJECT, 2021
** CPOOL
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a  = 1;
    int b  = 2;
    my_swap(a, b);
}