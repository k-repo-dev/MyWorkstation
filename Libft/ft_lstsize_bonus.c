/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:21:21 by krepo             #+#    #+#             */
/*   Updated: 2025/04/24 16:37:43 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp_lst;
	size_t	i;

	i = 0;
	tmp_lst = lst;
	while (tmp_lst)
	{
		tmp_lst = tmp_lst->next;
		i++;
	}
	return (i);
}
