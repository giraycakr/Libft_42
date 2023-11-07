#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int i;
    size_t s_len;

    s_len = 0;
    while(s[s_len])
        s_len++;
    i = 0;

    if(len > s_len)
        return (0);
    substr = (char *)malloc(len+1);
    if(!substr)
        return (0);
    while(len > 0)
    {
        substr[i] = s[start];
        i++;
        start++;
        len--;
    }
    substr[++i] = '\0';
    return (substr);
}