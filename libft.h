/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertrigna <ertrigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:55:52 by ertrigna          #+#    #+#             */
/*   Updated: 2024/11/06 15:17:24 by ertrigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#	define LIBFT_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <ctype.h>

/*Part 1*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_bzero(void *ptr, size_t n);
void	*ft_memset(void *ptr, int value, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *source, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t num);
int	ft_memcmp(const void *ptr, const	void *ptr2, size_t num);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t num, size_t size);

/*Part 2*/

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif