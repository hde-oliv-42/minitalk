/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:40:19 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:06:00 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * ft_printf - Prints a formatted string.
 *
 * @format: The base string.
 *
 * Description: It can handle the following arguments
 * (converter flags) such as c, s, p, d, i, u, x
 * and X, but no flags.
 *
 * Return: The number of chars printed.
 */
int		ft_printf(const char *format, ...);

/**
 * send_output - Send a string to STDOUT.
 *
 * @string: A string.
 *
 * Return: The number of chars printed.
 */
int		send_output(char *string);

/**
 * tag_handler - Deals with the incidence of % in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @string: Pointer to a string.
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		tag_handler(char **string, va_list args);

/**
 * char_handler - Deals with the incidence of the c converter in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		char_handler(va_list args);

/**
 * str_handler - Deals with the incidence of the s converter in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		str_handler(va_list args);

/**
 * int_handler - Deals with the incidence of the i or d converter in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		int_handler(va_list args);

/**
 * uint_handler - Deals with the incidence of the u converter in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		uint_handler(va_list args);

/**
 * ptr_handler - Deals with the incidence of the p converter in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		ptr_handler(va_list args);

/**
 * hex_handler - Deals with the incidence of the x converter in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		hex_handler(char converter, va_list args);

/**
 * percent_handler - Deals with the incidence of double % converters in a string.
 *
 * Description: Especific to ft_printf, it's a bad idea to
 * use it on other things.
 *
 * @args: A va_list.
 *
 * Return: The number of chars printed.
 */
int		percent_handler(void);

#endif
