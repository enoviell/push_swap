/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:12:49 by enoviell          #+#    #+#             */
/*   Updated: 2023/04/05 13:20:46 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_printstr(char *str);
int		ft_lenhex(unsigned int nbr);
void	ft_putnbrhex(unsigned int hex, const char format);
int		ft_printhex(unsigned int hex, const char format);
void	ft_put_ptr(unsigned long long ptr);
int		ft_ptrlen(unsigned long long ptr);
int		ft_print_ptr(unsigned long long ptr);
int		ft_putnbr(long int nbr);
int		ft_printnbr(int nbr);
int		ft_printunsigned(unsigned int unsnbr);

#endif
