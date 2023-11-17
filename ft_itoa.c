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

    nb = n;
    if(nb == -2147483648)
    {
        return (ft_strdup("-2147483648"));
    }
    digit = ft_digit(nb);
    returnarr = (char *)malloc(digit + 1 + (nb < 0 ? 1 : 0));
    if(!returnarr)
        return (0);
    returnarr[digit] = '\0';
    digit--;
    if(nb < 0)
    {
        returnarr[0] = '-';
        nb *= -1;
    }
    while(digit >= 0)
    {
        if(n < 0 && digit == 0)
        {
            returnarr[digit] = '-';
            break;
        }
        returnarr[digit] = nb % 10 + 48;
        nb /= 10;
        digit--;
    }
    return returnarr;
}
