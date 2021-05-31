#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>

# define A lst->list_a
# define B lst->list_b
# define S lst->list_s

typedef struct s_lst
{
    int		*list_a;
    int		*list_b;
    long long int     *list_s;
    int		size_max;
    int		size_a;
    int		size_b;
    int     nchunck;
    int     rchunck;
    int     hold_f;
    int     hold_s;
}               t_lst;

int     fill_tab(int argc, char **argv, t_lst *lst);
void    error_f(t_lst *lst, int i);
void    ft_sa(t_lst *lst);
void    ft_sb(t_lst *lst);
void    ft_ss(t_lst *lst);
void    ft_pa(t_lst *lst);
void    ft_pb(t_lst *lst);
void    ft_ra(t_lst *lst);
void    ft_rb(t_lst *lst);
void    ft_rr(t_lst *lst);
void    ft_rra(t_lst *lst);
void    ft_rrb(t_lst *lst);
void    ft_rrr(t_lst *lst);
void    ft_sort(t_lst *lst);
void    sort_sort_s(t_lst *lst);
void    big_sort(t_lst *lst);
    
#endif 