/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:56:13 by krepo             #+#    #+#             */
/*   Updated: 2025/04/21 16:30:18 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*sub_s;
	size_t			s_len;
	size_t			i;

	s_len = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= s_len)
		sub_s = (char *)malloc(1);
	if ((s_len - start) < len)
	{
		len = s_len - start;
		if (!sub_s)
			return (0);
	}
	i = 0;
	sub_s = (char *)malloc(len + 1);
	while (i < len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	return (sub_s);
}
