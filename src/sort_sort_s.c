/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sort_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:46:09 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/05/27 19:24:39 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_sort_s(t_lst *lst)
{
    int x;
    int t;

    x = 0;
    while (x < lst->size_max)
    {
        S[x] = A[x];
        x++;
    }
    x = 0;
    while (S[x + 1])
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
}