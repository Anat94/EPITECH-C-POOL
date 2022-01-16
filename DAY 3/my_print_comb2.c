/*
** EPITECH PROJECT, 2021
** CPOOL-Day1
** File description:
** my_print_comb2.c
*/
/*
** EPITECH PROJECT, 2018
** my_print_comb2
** File description:
**
*/

typedef struct number_s {
    int nb1;
    int nb2;
    int nb3;
    int nb4;

} number_t;

void my_putchar(char);

void display_putchar2(number_t number)
{
    if (number.nb1 == 57 && number.nb2 == 56 && number.nb3 == 57 && number.nb4 == 57) {
	my_putchar(number.nb1);
        my_putchar(number.nb2);
        my_putchar(' ');
        my_putchar(number.nb3);
        my_putchar(number.nb4);
        my_putchar('\n');
    } else if ((((number.nb3 * 10) + number.nb4) > ((number.nb1 * 10) + number.nb2)) && number.nb4 <= 57){
        my_putchar(number.nb1);
        my_putchar(number.nb2);
        my_putchar(' ');
        my_putchar(number.nb3);
        my_putchar(number.nb4);
        my_putchar(',');
        my_putchar(' ');
    }
}

void if_nb3(number_t *number)
{
    if (number->nb3 > 57) {
        number->nb3 = 48;
        number->nb2 = number->nb2 + 1;
        number->nb4 = number->nb2 + 1;
    }
}

void if_nb2(number_t *number)
{
    if (number->nb2 > 57) {
        number->nb1 = number->nb1 + 1;
        number->nb2 = 48;
        number->nb3 = number->nb2;
        number->nb4 = number->nb2 + 1;
    }
}

int	my_print_comb2(void)
{
    number_t number;
    number.nb1 = 48;
    number.nb2 = 48;
    number.nb3 = 48;
    number.nb4 = 49;

    while (number.nb1 <= 57) {
        display_putchar2(number);
        number.nb4 = number.nb4 + 1;
        if (number.nb4 > 57) {
            number.nb4 = 48;
            number.nb3 = number.nb3 + 1;
        }
        if_nb3(&number);
        if_nb2(&number);
    }
    return (0);
}

int main()
{
    my_print_comb2();
}