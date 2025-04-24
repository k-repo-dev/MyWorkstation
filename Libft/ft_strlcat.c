/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:24:19 by krepo             #+#    #+#             */
/*   Updated: 2025/04/17 11:13:06 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstl >= size)
		dstl = size;
	if (dstl == size)
		return (size + srcl);
	if (srcl < size - dstl)
		ft_memcpy(dst + dstl, src, srcl + 1);
	else
	{
		ft_memcpy(dst + dstl, src, size - srcl - 1);
		dst[size - 1] = 0;
	}
	return (dstl + srcl);
}
