/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:14:49 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/07 15:18:56 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int len;

    i = 0;
    len = 0;

    // Calculate the length of the source string
    while (src[len])
        len++;

    // Check if the size is greater than 0
    if (size > 0)
    {
        // Copy characters from src to dest
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }

        // Null-terminate the destination string
        dest[i] = '\0';
    }

    // Return the length of the source string
    return len;
}