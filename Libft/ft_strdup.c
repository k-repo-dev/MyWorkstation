/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:41:52 by krepo             #+#    #+#             */
/*   Updated: 2025/04/18 11:42:43 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*dst;

	len = ft_strlen(s);
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s, len);
	return (dst);
}
