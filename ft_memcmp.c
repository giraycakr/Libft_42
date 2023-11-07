#include "libft.h"

 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    unsigned char *arr1;
    unsigned char *arr2;

    arr1 = (unsigned char *)s1;
    arr2 = (unsigned char *)s2;

    while( *arr1 == *arr2 && n > 0)
    {
        n--;
        arr1++;
        arr2++;
    }
    return (*arr1 - *arr2);
 }
