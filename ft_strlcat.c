/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:16:20 by skihara           #+#    #+#             */
/*   Updated: 2020/11/16 22:41:19 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_count;
	size_t	src_count;

	dest_count = ft_strlen(dest);
	src_count = ft_strlen(src);
	i = 0;
	if (dest_count >= size)
		return (src_count + size);
	while (src[i] != '\0' && dest_count + i < size - 1)
	{
		dest[dest_count + i] = src[i];
		i++;
	}
	dest[dest_count + i] = '\0';
	return (dest_count + src_count);
}
