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

char	*ft_strrchr(const char *s, int c)
{
	const char	*returnpointer;

	while (*s)
	{
		if (*s == c)
			returnpointer = s;
		s++;
	}
	return ((char *)returnpointer);
}
