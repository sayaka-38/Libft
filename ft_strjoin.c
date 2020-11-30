/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:48:24 by skihara           #+#    #+#             */
/*   Updated: 2020/11/23 00:02:25 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	all_len;
	size_t	i;

	if (!s1 || !s2)
		return (ft_strdup(""));
	all_len = ft_strlen(s1) + ft_strlen(s2);
	ans = (char*)malloc(sizeof(char) * (all_len + 1));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		ans[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		ans[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	ans[all_len] = '\0';
	return (ans);
}
