#include "../include/push_swap.h"

void    ERROR(int i)
{
    if (i == -2)
        printf("Il n'y a pas que des int en arguments");
}

void ft_putstr(const char *str)
{
    int x;

    x = 0;
    while (str[x])
        x++;
    write(1, str, x);
}

int    init_lst(int argc, t_list *lst)
{
    if (!(lst = malloc(sizeof(t_list))))
        return (-1);
    lst->size_list = argc;
    printf("size = %i", lst->size_list);
    if (!(lst->list_a = malloc(sizeof(int) * lst->size_list)))
       return (-1);
    if (!(lst->list_b = malloc(sizeof(int) * lst->size_list)))
        return (-1);
    return (0);
}

int     check_argv(int argc, char **argv, t_list *lst)
{
    int x;
    const char *t;

    x = 0;
    if (argc < 1)
        return (0);
    init_lst(argc, lst);
    while (x < argc)
    {
        lst->list_a = 0;
        ft_putstr("Hello");
        lst->list_a[x] = atoi(argv[x + 1]);
        x++ ;
    }

    return (0);
}

int     main(int argc, char **argv)
{
    t_list *lst;
    if (check_argv(argc, argv, lst) == -2)
        ERROR(-2);
    int x = -1;
    while (x++ < argc)
        printf("lit_s[%i] = %i", x, lst->list_a[x]);
}