/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:31:55 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/13 18:35:42 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	uint8_t	*md;
	uint8_t	*ms;

	if (!n || dest == src)
		return (dest);
	md = dest;
	ms = src;
	i = 0;
	while (i < n)
	{
		md[i] = ms[i];
		i++;
	}
	return (dest);
}
