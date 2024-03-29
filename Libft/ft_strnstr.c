/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:22:40 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 17:58:36 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int	i;
	int				x;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		x = 0;
		while (str[i] == to_find[x] && str[i] != '\0')
		{
			if (to_find[x + 1] == '\0' && i < len)
				return (&str[i - x]);
			x++;
			i++;
		}
		if (x > 0)
			i -= x;
		i++;
	}
	return (0);
}
