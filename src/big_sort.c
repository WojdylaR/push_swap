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
		t++;
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
		lst->hold_f++;
	while (check_tab(lst, y--) == -1 && lst->size_a/2 <= y)
		lst->hold_s++;
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
			while (S[lst->size_max - 1] != B[0])
			{
				ft_putnbr_fd(S[lst->size_max - 1], 1);
				ft_rrb(lst);
			}
		else
			while (S[lst->size_max - 1] != B[0])
				ft_rb(lst);
		lst->size_max--;
		ft_pa(lst);
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
		if (lst->hold_f <= lst->hold_s && lst->hold_s)
			while (++x < lst->hold_f)
				ft_ra(lst);
		else
			while (++x < lst->hold_s)
				ft_rra(lst);

		ft_pb(lst);
		if (lst->size_max - lst->size_a > lst->rchunck * (lst->nchunck +1))
			lst->nchunck++;
	}
	push_to_a(lst);
}