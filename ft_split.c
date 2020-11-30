/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:44:47 by skihara           #+#    #+#             */
/*   Updated: 2020/11/30 20:46:57 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arylen(char const *s, char c)
{
	int i;
	int arylen;

	i = 0;
	arylen = 0;
	while (s[i])
	{
		if (s[i] != c)
			arylen++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (arylen);
}

static int	ft_chrcount(char const *s, char c)
{
	int	i;
	int	chrcount;

	i = 0;
	chrcount = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		chrcount++;
		i++;
	}
	return (chrcount);
}

static char	**all_free(char **ans, int i)
{
	while (0 < i)
	{
		free(ans[i]);
		ans[i] = NULL;
		i--;
	}
	free(ans);
	ans = NULL;
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**ans;
	int		i;
	int		j;
	int		k;

	if (!s ||
		(ans = (char**)malloc(sizeof(char*) * (ft_arylen(s, c) + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_arylen(s, c))
	{
		ans[i] = (char*)malloc(sizeof(char) * (ft_chrcount(&s[j], c) + 1));
		if (ans[i] == NULL)
			return (all_free(ans, i));
		k = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			ans[i][k++] = s[j++];
		ans[i][k] = '\0';
		i++;
	}
	ans[i] = NULL;
	return (ans);
}
