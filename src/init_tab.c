#include "../include/push_swap.h"

int    init_lst(int argc, t_lst *lst)
{
    lst->size_max = argc - 1;
    if (!(lst->list_a = malloc(sizeof(int) * lst->size_max)))
       return (-1);
    if (!(lst->list_b = malloc(sizeof(int) * lst->size_max)))
        return (-1);
    if (!(lst->list_s = malloc(sizeof(long long int) * lst->size_max)))
        return (-1);
    ft_bzero(lst->list_a, lst->size_max);
    ft_bzero(lst->list_b, lst->size_max);
    ft_bzero(lst->list_s, lst->size_max);
    lst->size_a = argc - 1;
    lst->size_b = 0;
    lst->rchunck = 49;
    return(0);
}

int     fill_tab(int argc, char **argv, t_lst *lst)
{
    int x;
    int j;

    x = 0;
    j = 0;
    if (argc < 1)
        return (0);
    init_lst(argc, lst);
    while (x < argc - 1)
    {
        while(argv[x + 1][j])
        {
            if (ft_isdigit(argv[x + 1][j]) || argv[x + 1][j] == '+' || argv[x + 1][j] == '-')
                j++;
            else
                error_f(lst, -1);
        }
        j = 0;
        S[x] = ft_atoi(argv[x + 1]);
        ft_putstr_fd(" ", 1);
        x++;
    }
        /*int n = 0;
        while (n < lst->size_max)
        {
            ft_putstr_fd("S[x] = ", 1);
            dprintf(1, "%lli", S[n]);
            ft_putstr_fd("\n", 1);
            n++;
        } */
        //ft_putstr_fd("\n", 1);
    sort_sort_s(lst);
    return (0);
}