/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertrigna <ertrigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:52:24 by ertrigna          #+#    #+#             */
/*   Updated: 2024/11/07 09:36:20 by ertrigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			return ((char *)(str + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
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