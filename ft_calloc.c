#include "libft.h"

void    *calloc(size_t count, size_t size)
{
    size_t total_size;
    void *retrn;

    total_size = count * size;
    retrn = (void *)malloc(total_size);
    if(!retrn)
        return (NULL);
    ft_memset(retrn,0,total_size);
    return (retrn);
}