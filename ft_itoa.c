/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertrigna <ertrigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:19:06 by ertrigna          #+#    #+#             */
/*   Updated: 2024/11/07 12:39:43 by ertrigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nb(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static char	*ft_malloc_str(int n)
{
	char	*str;
	int		len;

	len = ft_len_nb(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	int				len;
	int				sign;
	char			*str;
	unsigned int	nb;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = ft_len_nb(n);
	str = ft_malloc_str(n);
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = ft_abs(n);
	while (len > 0)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
