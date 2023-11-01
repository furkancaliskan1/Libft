/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:59:32 by fucalisk          #+#    #+#             */
/*   Updated: 2023/10/30 13:45:25 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;

	src2 = (const char *)src;
	dst2 = (char *)dst;
	if (dst2 == src2)
	{
		return (dst);
	}
	if (dst2 < src2 || dst2 >= src2 + len)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len > 0)
	{
		dst2[len - 1] = src2[len - 1];
		len--;
	}
	return (dst);
}
