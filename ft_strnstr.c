/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:15:50 by gcakirog          #+#    #+#             */
/*   Updated: 2023/11/01 20:08:06 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return ((char *)haystack);

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)(haystack + i));
            j++;
        }
        i++;
    }
    return (NULL);
}