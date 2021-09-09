/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:40:19 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:06:00 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	char_handler(va_list args)
{
	int		counter;
	char	to_print;
	char	*string;

	to_print = va_arg(args, int);
	if (!to_print)
	{
		write(1, &to_print, 1);
		return (1);
	}
	string = ft_calloc(sizeof(char), 2);
	string[0] = to_print;
	counter = send_output(string);
	free(string);
	return (counter);
}

int	str_handler(va_list args)
{
	char	*string;
	int		counter;
	char	*pointer;

	pointer = va_arg(args, char *);
	if (!pointer)
		return (write(1, "(null)", 6));
	string = ft_strdup(pointer);
	counter = send_output(string);
	free(string);
	return (counter);
}

int	percent_handler(void)
{
	return (write(1, "%", 1));
}
