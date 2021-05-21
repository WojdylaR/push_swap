#include "../include/push_swap.h"

void    ft_ra(t_lst *lst)
{
    int t;
    int x;

    x = 0;
    t = lst->list_a[0];
    while(x < lst->size_a - 1)
    {
        lst->list_a[x] = lst->list_a[x + 1];
        x++;
    }
    lst->list_a[x] = t;
}

void    ft_rb(t_lst *lst)
{
    int t;
    int x;

    x = 0;
    t = lst->list_b[0];
    while(x < lst->size_b - 1)
    {
        lst->list_b[x] = lst->list_b[x + 1];
        x++;
    }
    lst->list_b[x] = t;
}

void    ft_rr(t_lst *lst)
{
    ft_ra(lst);
    ft_rb(lst);
}