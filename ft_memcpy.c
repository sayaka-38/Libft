/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 20:36:07 by skihara           #+#    #+#             */
/*   Updated: 2020/11/22 20:44:41 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	void			*p;
	unsigned char	*destcp = (unsigned char*)dest;

	if (!destcp && !src)
		return (NULL);
	p = destcp;
	while (num-- > 0)
		*(destcp++) = *((unsigned char*)src++);
	return (p);
}
