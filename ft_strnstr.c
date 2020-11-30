/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:56:15 by skihara           #+#    #+#             */
/*   Updated: 2020/11/12 18:04:53 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	size_t	i;
	size_t	j;

	b = (char*)big;
	if (little[0] == '\0')
		return (b);
	i = 0;
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while ((b[i + j] == little[j]) && ((i + j) < len))
		{
			j++;
			if (little[j] == '\0')
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
