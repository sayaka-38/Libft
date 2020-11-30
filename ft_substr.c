/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:34:57 by skihara           #+#    #+#             */
/*   Updated: 2020/11/23 10:07:11 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	if (!s)
		return (NULL);
	if (len <= 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
	{
		
	}
	ans = (char*)malloc(sizeof(char) * (len + 1));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) && i < len)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
