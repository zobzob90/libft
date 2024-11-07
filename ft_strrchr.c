/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertrigna <ertrigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:08:00 by ertrigna          #+#    #+#             */
/*   Updated: 2024/11/07 09:38:37 by ertrigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	to_find;

	i = 0;
	to_find = (unsigned char)c;
	while (str[i])
		i++;
	while(i >= 0)
	{
		if(str[i] == to_find)
			return((char *)&str[i]);
		i--;
	}
	if (str[i] == to_find)
		return((char *)&str[i]);
	return (NULL);
}
