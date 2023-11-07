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

int	strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
