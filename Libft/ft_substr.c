/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-carm <mdo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:45:10 by mdo-carm          #+#    #+#             */
/*   Updated: 2023/06/13 18:01:27 by mdo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	char				*x;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (len > i)
		x = (char *)ft_calloc((i + 1), sizeof(char));
	else
		x = (char *)ft_calloc((len + 1), sizeof(char));
	if (!x)
		return (NULL);
	if (start > i)
		return (x);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		x[i] = s[i + start];
		i++;
	}
	return (x);
}
