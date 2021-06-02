#include "../include/push_swap.h"

void	ft_rra(t_lst *lst)
{
	int	t;
	int	x;

	x = lst->size_a - 1;
	t = lst->list_a[lst->size_a - 1];
	while (x > 0)
	{
		lst->list_a[x] = lst->list_a[x - 1];
		x--;
	}
	lst->list_a[x] = t;
	ft_putstr_fd("rra\n", 1);
}

void	ft_rrb(t_lst *lst)
{
	int	t;
	int	x;

	x = lst->size_b - 1;
	t = lst->list_b[lst->size_b - 1];
	while (x > 0)
	{
		lst->list_b[x] = lst->list_b[x - 1];
		x--;
	}
	lst->list_b[x] = t;
	ft_putstr_fd("rrb\n", 1);
}

void	ft_rrr(t_lst *lst)
{
	ft_rrb(lst);
	ft_rra(lst);
	ft_putstr_fd("rrr\n", 1);
}
