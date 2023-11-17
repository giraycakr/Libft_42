/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:08:58 by gcakirog          #+#    #+#             */
/*   Updated: 2023/10/29 02:09:49 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	t;

	t = 0;
	while (s1[t] && s2[t] && t < n && s1[t] == s2[t])
	{
		t++;
	}
	if (t == n)
	{
		return (0);
	}
	return ((unsigned char )s1[t] - (unsigned char)s2[t]);
}
