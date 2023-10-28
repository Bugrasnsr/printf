/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:03:26 by msansar           #+#    #+#             */
/*   Updated: 2023/10/27 21:48:32 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putchar(char x);
int	ft_string(char *str);
int	ft_unsigned(unsigned int w);
int	ft_hex(unsigned int d, char w);
int	ft_point(unsigned long w, int i);
int	ft_format(va_list *args, char w);
int	ft_printf(const char *format, ...);

#endif