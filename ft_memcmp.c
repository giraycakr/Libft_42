#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *arr1 = (const unsigned char *)s1;
    const unsigned char *arr2 = (const unsigned char *)s2;

    while (n > 0)
    {
        if (*arr1 != *arr2)
            return (*arr1 - *arr2);

        arr1++;
        arr2++;
        n--;
    }

    return 0; // Both memory blocks are equal
}

    