#include "../include/push_swap.h"

void    ft_pa(t_lst *lst)
{
    int x;

    x = lst->size_a;
    if (lst->list_b[lst->size_b - 1])
    {
        while(x > 0)
        {
            lst->list_a[x] = lst->list_a[x - 1];
            x--;
        }
        lst->list_a[0] = lst->list_b[0];
        x = 0;
        while(x < lst->size_b - 1)
        {
            lst->list_b[x] = lst->list_b[x + 1];
            x++;
        }
        lst->list_b[lst->size_b - 1] = 0;
        lst->size_b--;
        lst->size_a++;
    }
    ft_putstr_fd("pa\n", 1);
}

void    ft_pb(t_lst *lst)
{
    int x;

    x = lst->size_b;
    if (lst->list_a[lst->size_a - 1])
    {
        while(x > 0)
        {
            lst->list_b[x] = lst->list_b[x - 1];
            x--;
        }
        lst->list_b[0] = lst->list_a[0];
        x = 0;
        while(x < lst->size_a - 1)
        {
            lst->list_a[x] = lst->list_a[x + 1];
            x++;
        }
        lst->list_a[lst->size_a - 1] = 0;
        lst->size_b++;
        lst->size_a--;
    }
    ft_putstr_fd("pb\n", 1);
}