/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:05:32 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/08 10:52:14 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include	<stddef.h>
# include	<stdlib.h>
# include	<stdio.h>
# define LIBFT_H

	// whithout extern functions

int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
int		ft_atoi(const char *str);

	// only malloc function

char	*ft_strdup(const char *s);

	// Other

char	*ft_substr(char const *s, unsigned int start, size_t len);

	// write in the file descriptor

void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(int n, int fd);

#endif /* LIBFT_H */
