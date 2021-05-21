#include "../include/push_swap.h"

int    init_lst(int argc, t_lst *lst)
{
    lst->size_max = argc - 1;
    if (!(lst->list_a = malloc(sizeof(int) * lst->size_max)))
       return (-1);
    if (!(lst->list_b = malloc(sizeof(int) * lst->size_max)))
        return (-1);
    ft_bzero(lst->list_a, lst->size_max);
    ft_bzero(lst->list_b, lst->size_max);
    lst->size_a = argc - 1;
    lst->size_b = 0;
    return(0);
}

int     fill_tab(int argc, char **argv, t_lst *lst)
{
    int x;
    const char *t;

    x = 0;
    if (argc < 1)
        return (0);
    init_lst(argc, lst);
    while (x < argc - 1)
    {
        lst->list_a[x] = atoi(argv[x + 1]);
        x++ ;
    }
    return (0);
}