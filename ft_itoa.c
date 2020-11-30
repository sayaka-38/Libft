/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:01:39 by skihara           #+#    #+#             */
/*   Updated: 2020/11/21 18:14:17 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(long int n)
{
	int		nbr_count;

	nbr_count = 1;
	while (10 <= n)
	{
		n /= 10;
		nbr_count++;
	}
	return (nbr_count);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*ans;
	int				len;
	int				i;

	nb = (n < 0 ? -n : n);
	len = ft_nbrlen(nb);
	ans = (char*)malloc(sizeof(char) * len + 1 + (n < 0 ? 1 : 0));
	if (ans == NULL)
		return (NULL);
	i = (n < 0 ? len + 1 : len);
	ans[i] = '\0';
	i--;
	while (i >= 0)
	{
		ans[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	if (n < 0)
		ans[0] = '-';
	return (ans);
}
