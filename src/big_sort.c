/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:44:30 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/06/02 18:51:39 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_tab(t_lst *lst, int x)
{
	int	t;

	t = lst->rchunck * lst->nchunck;
	while (t < lst->rchunck * (lst->nchunck + 1) && A[x] != S[t])
		t++;
	if (A[x] == S[t])
		return (1);
	return (-1);
}

void	check_chunck(t_lst *lst)
{
	int	x;
	int	y;

	x = 0;
	y = lst->size_a - 1;
	lst->hold_f = 0;
	lst->hold_s = 1;
	while (check_tab(lst, x++) == -1 && lst->size_a / 2 > x)
		lst->hold_f++;
	while (check_tab(lst, y--) == -1 && lst->size_a / 2 <= y)
		lst->hold_s++;
}

void	push_to_a(t_lst *lst)
{
	if (A[0] > A[1])
		ft_sa(lst);
	while (lst->size_b > 0)
	{
		if ((B[0] < A[0] && A[0] < A[lst->size_a - 1])
			|| (B[0] < A[0] && B[0] > A[lst->size_a - 1]
				&& A[0] > A[lst->size_a]))
			ft_pa(lst);
		if (B[0] > A[0] && B[0] > A[lst->size_a - 1]
			&& A[0] < A[lst->size_a - 1])
		{
			ft_pa(lst);
			ft_ra(lst);
		}
		if (B[0] > A[0] && B[0] < A[1])
		{
			ft_pa(lst);
			ft_sa(lst);
		}
		if (B[0] > A[0] && B[0] > A[1])
			ft_ra(lst);
		if (B[0] < A[lst->size_a - 1] && A[0] > A[lst->size_a - 1])
			ft_rra(lst);
	}
}

void	big_sort(t_lst *lst)
{
	int	x;

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
		if (lst->size_max - lst->size_a > lst->rchunck * (lst->nchunck + 1))
			lst->nchunck++;
	}
	ft_pa(lst);
	ft_pa(lst);
	push_to_a(lst);
	while (A[0] > A[lst->size_a - 1])
		ft_rra(lst);
}
