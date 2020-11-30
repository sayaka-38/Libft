/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:46:09 by skihara           #+#    #+#             */
/*   Updated: 2020/11/22 20:40:51 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ans = (char*)malloc(sizeof(char) * (len + 1));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ans[i] = (*f)(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
