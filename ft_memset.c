/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:23:38 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/13 18:29:13 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	uint8_t	*ptr;

	i = 0;
	ptr = (uint8_t *)str;
	if (ptr == NULL)
		return ;
	i = 0;
	while (i < n)
	{
		ptr[i++] = (uint8_t)c;
		ptr++;
	}
	return (ptr);
}
