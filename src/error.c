#include "../include/push_swap.h"

void    error_f(t_lst *lst, int i)
{
    if (i == -1)
        ft_putstr_fd("Error", 1);
    else
        ft_putstr_fd("Ok", 1);
    if (S)
        free(S);
    if (A)
        free (A);
    if (B)
        free(B);
    exit(EXIT_SUCCESS);
}
