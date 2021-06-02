#include "../include/push_swap.h"

void	ft_sa(t_lst *lst)
{
	int	t;

	t = lst->list_a[0];
	lst->list_a[0] = lst->list_a[1];
	lst->list_a[1] = t;
	ft_putstr_fd("sa\n", 1);
}

void 	ft_sb(t_lst *lst)
{
	int	t;

	t = lst->list_b[0];
	lst->list_b[0] = lst->list_b[1];
	lst->list_b[1] = t;
	ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_lst *lst)
{
	ft_sa(lst);
	ft_sb(lst);
	ft_putstr_fd("ss\n", 1);
}
