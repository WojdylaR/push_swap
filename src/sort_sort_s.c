/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sort_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:46:09 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/06/02 19:09:24 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_s(t_lst *lst)
{
	int	x;

	x = 0;
	while (x < lst->size_max)
	{
		if (S[x] == S[x + 1])
		{
			error_f(lst, -1);
		}
		if (S[x] < -2147483648 || S[x] > 2147483647)
			error_f(lst, -1);
		x++;
	}
}

void	sort_sort_s(t_lst *lst)
{
	int	x;
	int	t;

	x = 0;
	while (x < lst->size_max)
	{
		A[x] = S[x];
		x++;
	}
	x = 0;
	while (x + 1 < lst->size_max)
	{
		if (S[x] > S[x + 1])
		{
			t = S[x];
			S[x] = S[x + 1];
			S[x + 1] = t;
			x = -1;
		}
		x++;
	}
	check_s(lst);
}
