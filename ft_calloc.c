/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:35:11 by skihara           #+#    #+#             */
/*   Updated: 2020/11/30 20:40:48 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;

	p = malloc((n * size));
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, (n * size));
	return ((void*)p);
}
