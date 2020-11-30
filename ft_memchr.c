/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:54:23 by skihara           #+#    #+#             */
/*   Updated: 2020/11/12 13:00:25 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = (const unsigned char*)s;

	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void*)p);
		p++;
		n--;
	}
	return (NULL);
}
