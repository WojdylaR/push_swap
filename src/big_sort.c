/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:44:30 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/05/28 18:03:15 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		check_tab(t_lst *lst, int x)
{
	int		t;

	t = lst->rchunck * lst->nchunck;
	while (t < lst->rchunck * (lst->nchunck + 1)  - 1 && A[x] != S[t])
	{
		//sleep(1);
		t++;
		/*ft_putstr_fd("\nt = ", 1);
		ft_putnbr_fd(t, 1);
		ft_putstr_fd("n * r + 1 = ", 1);*/
		//ft_putnbr_fd(lst->rchunck * (lst->nchunck + 1), 1);
	}
	if (A[x] == S[t])
		return (1);
	
	return (-1);
}

void	check_chunck(t_lst *lst)
{
	int x;
	int y;

	x = 0;
	y = lst->size_a - 1;
	lst->hold_f = 0;
	lst->hold_s = 1;
	while (check_tab(lst, x++) == -1 && lst->size_a/2 > x )
	{
		//ft_putnbr_fd(x, 1);	
		lst->hold_f++;
	}
	/*ft_putstr_fd("\nnchecktab_y = ", 1);
	ft_putnbr_fd(check_tab(lst, y--), 1);*/
	while (check_tab(lst, y--) == -1 && lst->size_a/2 <= y)
	{
		lst->hold_s++;
	}
}

void push_to_a(t_lst *lst)
{
	int x;

	x = 0;
	while (lst->size_b > 0)
	{
		while (S[lst->size_max] != B[x])
			x++;
		if (x > lst->size_b / 2)
		{
			while (S[0] != B[0])
			{
				ft_rrb(lst);
			}
		}
		else
		{
			while (S[0] != B[0])
		{
			ft_putstr_fd("Hello", 1);
				ft_rb(lst);
		}
		}
		lst->size_max--;
		ft_pb(lst);
		x = 0;
	}
}

void	big_sort(t_lst *lst)
{
	int x;

	lst->nchunck = 0;
	while (lst->size_a > 0)
	{
		x = -1;
		check_chunck(lst);
		printf("\n hold = %i, hols = %i\n", lst->hold_f, lst->hold_s);
		ft_putstr_fd(" c max = ", 1);
		ft_putnbr_fd(lst->rchunck * (lst->nchunck + 1), 1);
		ft_putstr_fd("\n", 1);
		int y = -1;
		while (y++ < lst->size_max)
			printf("list_a[%i] = %i, list_b[%i] = %i,lst_s [%i] = %i \n",y, lst->list_a[y], y, lst->list_b[y],  y, lst->list_s[y]);
		if (lst->hold_f <= lst->hold_s && lst->hold_s)
			while (++x < lst->hold_f)
				ft_ra(lst);
		else
			while (++x < lst->hold_s)
				ft_rra(lst);

		ft_pb(lst);


		//int y = -1;
		printf("\n");
		/*while (y++ < lst->size_max)
			printf("lst_s [%i] = %i, list_a[%i] = %i, list_b[%i] = %i\n", y, lst->list_s[y], y, lst->list_a[y], y, lst->list_b[y]);*/

		if (lst->size_max - lst->size_a > lst->rchunck * (lst->nchunck +1))
		{
			ft_putstr_fd("max - sa = ", 1);
			ft_putnbr_fd(lst->rchunck, 1);
			lst->nchunck++;
		}
	}
	push_to_a(lst);
}