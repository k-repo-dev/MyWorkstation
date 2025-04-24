/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 07:54:08 by krepo             #+#    #+#             */
/*   Updated: 2025/04/18 11:28:22 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(nmemb * size);
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return (tmp);
}
