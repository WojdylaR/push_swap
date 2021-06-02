#include "../include/push_swap.h"

void	error_f(t_lst *lst, int i)
{
	if (i == -1)
		ft_putstr_fd("Error\n", 1);
	if (lst->list_a)
		free(lst->list_a);
	if (lst->list_b)
		free(lst->list_b);
	if (lst->list_s)
		free(lst->list_s);
	if (lst)
		free(lst);
	exit(EXIT_SUCCESS);
}
