/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krepo <krepo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:09:57 by krepo             #+#    #+#             */
/*   Updated: 2025/04/26 12:00:46 by krepo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*result;
	char			cc;

	cc = (char) c;
	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] == cc)
			result = ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		result = ((char *) &s[i]);
	return (result);
}
