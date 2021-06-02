/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:06:45 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/06/02 20:29:30 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_lst(int *lst, int size)
{
	int	x;

	x = 0;
	while (x < size - 1)
	{
		if (lst[x] > lst[x + 1])
			return (-1);
		x++;
	}
	return (1);
}

void	ft_sort_three(t_lst *lst)
{
	if (A[0] > A[1] && A[0] < A[2] && A[0] < A[2])
		ft_sa(lst);
	else if (A[0] > A[1] && A[1] > A[2] && A[1] > A[2])
		ft_sa(lst);
	else if (A[0] > A[1] && A[0] > A[2] && A[1] < A[2])
		ft_ra(lst);
	else if (A[0] < A[1] && A[0] < A[2] && A[1] > A[2])
		ft_sa(lst);
	else if (A[0] < A[1] && A[0] > A[2] && A[1] > A[2])
		ft_rra(lst);
}

void	ft_sort_fo_fi(t_lst *lst)
{
	while (lst->size_a > 3)
		ft_pb(lst);
	while (ft_check_lst(A, lst->size_a) == -1
		&& ft_check_lst(B, lst->size_b == -1))
	{
		ft_sort_three(lst);
		if (B[1] && B[1] > B[0])
			ft_rb(lst);
	}
	push_to_a(lst);
	while (ft_check_lst(A, lst->size_a) == -1)
		ft_rra(lst);
}

void	ft_sort_little_lst(t_lst *lst)
{
	if (lst->size_max == 3)
	{
		while (ft_check_lst(A, lst->size_a) == -1)
			ft_sort_three(lst);
	}
	if (lst->size_max == 2)
		ft_ra(lst);
	if (lst->size_max > 3)
		ft_sort_fo_fi(lst);
}

void	ft_sort(t_lst *lst)
{
	if (ft_check_lst(A, lst->size_a) == -1)
	{
		if (lst->size_max <= 5)
			ft_sort_little_lst(lst);
		else
			big_sort(lst);
	}
}
