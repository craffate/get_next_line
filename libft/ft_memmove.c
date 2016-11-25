/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:14:26 by craffate          #+#    #+#             */
/*   Updated: 2016/11/06 14:00:38 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (dst > src)
		while (len-- > 0)
			((char *)dst)[len] = ((const char *)src)[len];
	else
		while (len-- > 0)
			((char *)dst)[i++] = *(const char *)src++;
	return (dst);
}
