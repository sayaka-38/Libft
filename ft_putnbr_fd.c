/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skihara <skihara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:41:05 by skihara           #+#    #+#             */
/*   Updated: 2020/11/22 18:06:15 by skihara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_count(long nbr)
{
	int count;

	count = 0;
	while (10 <= nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		minus_flag;
	int		numlen;
	int		exponent;
	int		ex;

	minus_flag = (n < 0 ? 1 : 0);
	nbr = n;
	(nbr < 0) ? (nbr *= -1) : 0;
	numlen = num_count(nbr);
	minus_flag ? ft_putchar_fd('-', fd) : "";
	while (0 < numlen--)
	{
		exponent = numlen;
		ex = 10;
		while (exponent--)
			ex *= 10;
		ft_putchar_fd((nbr / ex + '0'), fd);
		nbr %= ex;
	}
	ft_putchar_fd((nbr + '0'), fd);
}
