/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:21:51 by gcakirog          #+#    #+#             */
/*   Updated: 2023/10/29 02:24:14 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*result;	

	c = (unsigned char)c;
	i = ft_strlen(str);
	result = (char *)str;
	if (c == 0)
		return (&result[i]);
	while (i >= 0)
	{
		if (result[i] == c)
			return (&result[i]);
		i--;
	}
	return (0);
}

