#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *returnarr;
    size_t size1;
    size_t size2;

    size1 = ft_strlen(s1);
    size2 = ft_strlen(s2);
    returnarr = (char *)malloc(size1 + size2 + 1);
    if(!returnarr)
        return NULL;
    ft_memcpy(returnarr,s1,size1);
    ft_memcpy(returnarr + size1,s2,size2);
    returnarr[size1 + size2] = '\0';
    return returnarr;
}   