#include "../include/push_swap.h"


int     main(int argc, char **argv)
{
    t_lst *lst;
    if (!(lst = malloc(sizeof(t_lst))))
        return (-1);
    if (fill_tab(argc, argv, lst) == -2)
        ERROR(-2);
    int x = -1;
    while (x++ < argc - 2)
        printf("list_a[%i] = %i, list_b[%i] = %i\n", x, lst->list_a[x], x, lst->list_b[x]);
    ft_sa(lst);
    ft_pb(lst);
    ft_pb(lst);
    ft_pb(lst);
    ft_rr(lst);
    ft_rrr(lst);
    ft_sa(lst);
    ft_pa(lst);
    ft_pa(lst);
    ft_pa(lst);
    x = -1;
    ft_putstr_fd("\n\n\n", 1);
    while (x++ < argc - 2)
        printf("list_a[%i] = %i, list_b[%i] = %i\n", x, lst->list_a[x], x , lst->list_b[x]);
    }