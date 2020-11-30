/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:18:27 by skihara           #+#    #+#             */
/*   Updated: 2020/11/20 18:04:37 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (num > 0)
		{
			((unsigned char*)dest)[num - 1] = ((unsigned char*)src)[num - 1];
			num--;
		}
	}
	else
	{
		i = 0;
		while (i < num)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	return (dest);
}
