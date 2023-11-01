/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:01:23 by fucalisk          #+#    #+#             */
/*   Updated: 2023/10/27 19:57:57 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (search[j] == '\0')
		return ((char *)string);
	while (string[i] != '\0')
	{
		while (string[i + j] == search[j] && string[i + j] != '\0' && \
		(i + j) < len)
			j++;
		if (search[j] == '\0')
			return ((char *)string + i);
		i++;
		j = 0;
	}
	return (0);
}
