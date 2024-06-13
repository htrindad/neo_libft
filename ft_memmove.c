/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:36:48 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/13 18:41:02 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	uint8_t	*tmp1;
	uint8_t	*tmp2;

	if (!n)
		return (dest);
	tmp1 = (uint8_t *)dest;
	tmp2 = (uint8_t *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		while (n--)
			tmp1[n] = tmp2[n];
	}
	return (dest);
}
