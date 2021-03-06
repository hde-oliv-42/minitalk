/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:40:19 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/09/29 17:06:00 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include "ft_printf.h"
# include "libft.h"

# define ZERO 10
# define ONE 12
# define KILL_ERR "Couldn't send a signal."
# define SIGA_ERR "Couldn't establish signal listening."
# define MALL_ERR "Couldn't allocate memory."

struct s_byte
{
	int	a:1;
	int	b:1;
	int	c:1;
	int	d:1;
	int	e:1;
	int	f:1;
	int	g:1;
	int	h:1;
};

union u_chr
{
	struct s_byte	byte;
	char			chr;
};

void	initialize_ptr(char **ptr);
void	concatenate_byte(char **ptr, char c);
void	check_end_of_string(char **ptr, char c);
void	err(char *str);

#endif
