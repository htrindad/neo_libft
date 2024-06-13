/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:39:46 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/13 19:43:57 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	while (i++ < len)
		str++;
	if (!c)
		return (str);
	while (i--)
	{
		if (*str == c)
			return (str);
		str--;
	}
	if (*str == c)
		return (str);
	return (NULL);
}
