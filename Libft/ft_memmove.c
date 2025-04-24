/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:46:34 by krepo             #+#    #+#             */
/*   Updated: 2025/04/17 08:16:30 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;
	int		i;

	if (!dst && !src)
		return (0);
	tdst = (char *) dst;
	tsrc = (char *) src;
	i = 0;
	if (tdst > tsrc)
	{
		while(n-- > 0)
			tdst[n] = tsrc[n];
	}
	else 
	{
		while (i < n)
		{
			tdst[i] = tsrc[i];
			i++;
		}
	}
	return (dst);
}
