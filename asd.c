#include "libft.h"

static int ft_digit(int n)
{
    int digit;

    digit = 0;
    if(n == 0)
        return (digit + 1);
    if(n < 0)
    {
        digit++;
        n *= -1;
    }
    while(n > 0)
    {
        digit++;
        n /= 10;
    }
    return digit;
}

char *ft_itoa(int n)
{
    char *returnarr;
    int digit;
    int nb;

    nb = ft_digit(n);
    returnarr = (char *)malloc(nb+1);
    if(!returnarr)
        return (0);
    returnarr[nb] = '\0';
    nb--;
    if(n < 0)
    {
        returnarr[0] = '-';
        n *= -1;
    }
    while(nb > 0)
    {
        returnarr[nb] = n % 10 + 48;
        n /= 10;
        nb--;
    }
    return returnarr;
}

#include <stdio.h>
int main()
{
    int a = -21321412;
    printf("%s\n",ft_itoa(a));
}

