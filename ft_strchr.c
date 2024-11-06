/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertrigna <ertrigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:52:24 by ertrigna          #+#    #+#             */
/*   Updated: 2024/11/06 09:06:09 by ertrigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	to_find;

	i = 0;
	to_find = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == to_find)
			return ((char *)&str[i]);
		i++;
	}
	if (to_find == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
int main()
{
	char *str = "hello";
	char *result;

	result = ft_strchr(str, 'e');
	if (result)
		printf("Premier caractère trouvé : %c\n", *result);
	else
		printf("Caractère 'e' non trouvé.\n");

	return 0;
}
*/