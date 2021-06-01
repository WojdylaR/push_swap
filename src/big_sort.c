/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:44:30 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/05/31 17:50:51 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_tab(t_lst *lst, int x)
{
	int t;

	t = lst->rchunck * lst->nchunck;
	while (t < lst->rchunck * (lst->nchunck + 1) - 1 && A[x] != S[t])
		t++;
	if (A[x] == S[t])
		return (1);

	return (-1);
}

void check_chunck(t_lst *lst)
{
	int x;
	int y;

	x = 0;
	y = lst->size_a - 1;
	lst->hold_f = 0;
	lst->hold_s = 1;
	while (check_tab(lst, x++) == -1 && lst->size_a / 2 > x)
		lst->hold_f++;
	while (check_tab(lst, y--) == -1 && lst->size_a / 2 <= y)
		lst->hold_s++;
}

void push_to_a(t_lst *lst)
{
	//int x;

	int n = 0;
	ft_pa(lst);
	ft_pa(lst);
	if (A[0] > A[1])
		ft_sa(lst);
	while (lst->size_b > 0)
	{
		while (n < 6)
     	{
      	 	//dprintf(1, "B[%i] = %i, A[%i] = %i, S[%i] = %lli", n, B[n], n, A[n], n, S[n]);
       		//ft_putstr_fd("\n", 1);
          	n++;
    	}
		if (B[0] < A[lst->size_a - 1] && A[0] > A[lst->size_a - 1])
		{
			//dprintf(1, "\na[0] = %i, A[%i] = %i\n", B[0], lst->size_a - 1, A[1]);
			ft_rra(lst);
		}
		if ((B[0] < A[0] && A[0] < A[lst->size_a - 1]) || (B[0] < A[0] && B[0] > A[lst->size_a - 1] && A[0] > A[lst->size_a]))
			ft_pa(lst);
		if (B[0] > A[0] && B[0] > A[lst->size_a - 1] && A[0] < A[lst->size_a - 1])
		{
			ft_pa(lst);
			ft_ra(lst);
		}
		if (B[0] > A[0] && B[0] < A[1])
		{
			ft_pa(lst);
			ft_sa(lst);
		}
		//ft_putstr_fd("\n", 1);
		if (B[0] > A[0] && B[0] > A[1])
			ft_ra(lst);

		//sleep(1);
		n = 0;
	}
	//dprintf(1, "\n\nA0 = %i, Asa = %i", A[0], A[lst->size_a - 1]);
/*
	int n = 0;
	ft_putstr_fd("size maxx = ", 1);
	ft_putnbr_fd(lst->size_max, 1);
	x = 0;
	while (lst->size_b > 0)
	{
		while (S[lst->size_max - 1] != B[x])
		{
			x++;
			sleep(1);
			ft_putstr_fd("\nsx = ", 1);
			ft_putnbr_fd(S[lst->size_max - 1], 1);
			ft_putstr_fd("\nBx = ", 1);
			ft_putnbr_fd(B[x], 1);
		}
		if (x > lst->size_b / 2)
			while (S[lst->size_max - 1] != B[0])
			{
				while (n < 6)
        		{
           		 	dprintf(1, "B[%i] = %i, A[%i] = %i, S[%i] = %lli", n, B[n], n, A[n], n, S[n]);
          		  	ft_putstr_fd("\n", 1);
            		n++;
        		}
				n = 0;
				ft_putstr_fd("\nsmax =", 1);
				ft_putnbr_fd(lst->size_max, 1);
				ft_putstr_fd("\nS[0] =", 1);
				ft_putnbr_fd(B[1], 1);
				ft_putstr_fd("\n", 1);
				ft_rrb(lst);
				sleep(1);
			}
		else
			while (S[lst->size_max - 1] != B[0])
			{
				while (n < 6)
        		{
           		 	dprintf(1, "B[%i] = %i, A[%i] = %i, S[%i] = %lli", n, B[n], n, A[n], n, S[n]);
          		  	ft_putstr_fd("\n", 1);
            		n++;
        		}
				dprintf(1, "s[smax] = %lli, B[0]")
				n = 0;
				ft_rb(lst);
			}
		lst->size_max--;
		ft_pa(lst);
		x = 0;
	}*/
	while (A[0] > A[lst->size_a - 1])
	{
		//ft_putstr_fd("Hello", 1);
		ft_rra(lst);
	}
}

void big_sort(t_lst *lst)
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
		if (lst->size_max - lst->size_a > lst->rchunck * (lst->nchunck + 1))
			lst->nchunck++;
	}
	push_to_a(lst);
}