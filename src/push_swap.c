#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*lst;

	lst = malloc(sizeof(t_lst));
	if (!(lst))
		return (-1);
	fill_tab(argc, argv, lst);
	ft_sort(lst);
	error_f(lst, 2);
}
