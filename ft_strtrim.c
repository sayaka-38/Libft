/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:47:36 by skihara           #+#    #+#             */
/*   Updated: 2020/11/22 17:30:20 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_judge(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_start;
	size_t	str_end;
	char	*ans;

	if (!s1 || !set)
		return (NULL);
	str_start = 0;
	while (s1[str_start] && char_judge(s1[str_start], set))
		str_start++;
	str_end = ft_strlen(s1);
	while (char_judge(s1[str_end - 1], set) && (str_start < str_end))
		str_end--;
	ans = (char*)malloc(sizeof(char) * (str_end - str_start + 1));
	if (ans == NULL)
		return (NULL);
	ft_strlcpy(ans, (s1 + str_start), (str_end - str_start + 1));
	return (ans);
}
