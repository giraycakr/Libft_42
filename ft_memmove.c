/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:50:16 by gcakirog          #+#    #+#             */
/*   Updated: 2023/10/29 01:57:42 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	const unsigned char	*source;

	dest = dst;
	source = src;
	if (!dst || !src)
		return (NULL);
	if (dest == source)
		return (dest);
	if (dest > source && dest < source + len)
	{
		dest += len - 1;
		source += len - 1;
		while (len)
		{
			*dest = *source;
			dest++;
			source++;
			len--;
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
