/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 10:01:30 by skihara           #+#    #+#             */
/*   Updated: 2020/11/20 19:09:37 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus_flag;
	int	ans;

	minus_flag = 0;
	i = 0;
	while (('\t' <= nptr[i] && nptr[i] <= '\r') || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
		minus_flag = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	ans = 0;
	while ((nptr[i] != '\0') && (nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		ans = ans * 10;
		ans -= nptr[i] - '0';
		i++;
	}
	return (minus_flag ? ans : -ans);
}
