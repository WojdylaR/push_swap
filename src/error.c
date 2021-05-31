#include "../include/push_swap.h"

void    error_f(t_lst *lst, int i)
{
    if (i == -1)
        ft_putstr_fd("Error", 1);
    else
        ft_putstr_fd("Ok", 1);
    if (lst->list_a)
    ft_putstr_fd("free1 \n", 1);
        free(lst->list_a);
    ft_putstr_fd("free2 \n", 1);
    if (lst->list_b)
        free(lst->list_b);
    ft_putstr_fd("free3 \n", 1);
    if (lst->list_s)
        free(lst->list_s);
    ft_putstr_fd("free4 \n", 1);
    if (lst)
        free(lst);
    ft_putstr_fd("free5 \n", 1);
    exit(EXIT_SUCCESS);
}
