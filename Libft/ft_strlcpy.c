/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:24:14 by krepo             #+#    #+#             */
/*   Updated: 2025/04/17 11:04:47 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcl;

	srcl = ft_strlen(src);
	if (srcl + 1 < size)
		ft_memcpy(dst, src, srcl + 1);
	else if (srcl != 0)
	{
		ft_memcpy(dst, src, srcl - 1);
		dst[size - 1] = 0;
	}
	return (srcl);
}
