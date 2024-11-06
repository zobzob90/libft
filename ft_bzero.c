/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertrigna <ertrigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:41:43 by ertrigna          #+#    #+#             */
/*   Updated: 2024/11/05 14:36:49 by ertrigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char *pointeur;

	i = 0;
	pointeur = (unsigned char *)ptr;
	while (i < n)
	{
		pointeur[i++] = 0; 
	}
}

/*
int main()
{
	int i = 0;
	int buff[5] = {1, 2, 3 ,4, 5};
	printf("Avant bzero :\n%d\n%d\n%d\n%d\n%d\n", buff[0], buff[1], buff[2], buff[3], buff[4]);
	ft_bzero(buff, sizeof(buff));
	printf("Apres bzero :\n%d\n%d\n%d\n%d\n%d\n", buff[0], buff[1], buff[2], buff[3], buff[4]);
}
*/