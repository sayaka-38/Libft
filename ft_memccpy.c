/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 20:36:07 by skihara           #+#    #+#             */
/*   Updated: 2020/11/21 18:13:47 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	p = (unsigned char*)dest;
	q = (unsigned char*)src;
	i = 0;
	while (i < num)
	{
		p[i] = q[i];
		if (p[i] == (unsigned char)c)
			return (&p[i + 1]);
		i++;
	}
	return (NULL);
}
