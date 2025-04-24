/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:13:58 by krepo             #+#    #+#             */
/*   Updated: 2025/04/17 14:48:10 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char) s1;
	ts2 = (unsigned char) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) ts1[i] != (unsigned char) ts2[i])
			return ((unsigned char) ts1[i] - (unsigned char) ts2[i]);
		i++;
	}
	return (0);
}
