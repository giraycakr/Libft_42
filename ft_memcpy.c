/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:37:51 by gcakirog          #+#    #+#             */
/*   Updated: 2023/10/29 01:48:53 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const unsigned char		*source;
	unsigned char								*dest;

	dest = dst;
	source = src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*dest = *source;
		dst++;
		src++;
		n--;
	}
	return (dst);
}
