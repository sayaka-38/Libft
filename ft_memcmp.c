/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:49:22 by skihara           #+#    #+#             */
/*   Updated: 2020/11/12 13:00:42 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p = (const unsigned char*)s1;
	const unsigned char *q = (const unsigned char*)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (p[i] - q[i] != 0)
			return (p[i] - q[i]);
		i++;
	}
	return (0);
}
