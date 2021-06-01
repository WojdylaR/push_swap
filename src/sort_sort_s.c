/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sort_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:46:09 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/05/31 19:14:17 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    check_s(t_lst *lst)
{
    int x;

    x = 0;
    while (x < lst->size_max - 1)
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

void sort_sort_s(t_lst *lst)
{
    int x;
    int t;

    x = 0;
    while (x < lst->size_max)
    {
        A[x] = S[x];
        x++;
    }
    x = 0;
    /* while (x < 6)
    {
        ft_putstr_fd("S[i] = ", 1);
        ft_putnbr_fd(S[x], 1);
        ft_putstr_fd("\n", 1);
        x++;
    }*/
    x = 0;
    //je suis con il faut bien sur savoir la taille actuelle de la liste sinon ....... tu continue. Les tableaux de ints ne sont et ne peuvent pas etres null terminated a cause de 0 (qui est aussi un nombre)
    //enfaite tu seg / bus error mais tu tiens 3 chiffres + ou - avant de trouver un 7
    while (x + 1 < lst->size_max)
    {
        //ft_putstr_fd("\n", 1);
        if (S[x] > S[x + 1])
        {
            //ft_putnbr_fd(x, 1);
            t = S[x];
            S[x] = S[x + 1];
            S[x + 1] = t;
            x = -1;
            
            //ft_putstr_fd("-------------------------------------------------------------------------\n", 1);
        }
        x++;
    }
    x = 0;
    /*while (x < lst->size_max)
    {
        ft_putstr_fd("S[z] = ", 1);
        ft_putnbr_fd(S[x], 1);
        ft_putstr_fd("\n", 1);
        x++;
    }*/
    check_s(lst);
    
}