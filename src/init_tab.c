#include "../include/push_swap.h"

int    init_lst(int argc, t_lst *lst)
{
    int x;

    x = - 1;
    lst->size_max = argc - 1;
    if (!(lst->list_a = malloc(sizeof(int) * lst->size_max)))
       return (-1);
    if (!(lst->list_b = malloc(sizeof(int) * lst->size_max)))
        return (-1);
    if (!(lst->list_s = malloc(sizeof(long long int) * lst->size_max)))
        return (-1);
    while (x++ < argc - 2)
        {
            lst->list_a[x] = '\0';
            lst->list_b[x] = '\0';
            lst->list_s[x] = '\0';
        }
    lst->size_a = argc - 1;
    lst->size_b = 0;
    lst->rchunck = 9;
    return(0);
}

int     fill_tab(int argc, char **argv, t_lst *lst)
{
    int x;
    int j;

    x = 0;
    if (argc < 1)
        return (0);
    init_lst(argc, lst);
    while (x < argc - 1)
    {
        while (argv[x + 1][j])
        {
			if (ft_isdigit(argv[x + 1][j]) || argv[x + 1][j] == '+' || argv[x + 1][j] == '-')
				j++;
			else
				error_f(lst, -1);
        }
        j = 0;
        S[x] = ft_atoi(argv[x + 1]);
        x++;
    }
    sort_sort_s(lst);
    return (0);
}