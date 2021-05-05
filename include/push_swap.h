#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_list
{
    int *list_a;
    int *list_b;
    int size_list;
}               t_list;

#endif 