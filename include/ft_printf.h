/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:35:15 by alesanto          #+#    #+#             */
/*   Updated: 2020/01/07 15:01:14 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# define VALID_FLAGS "cdi%xXups"
# define VALID_FLAGS_V2 "diuxXp"

typedef struct		s_struct
{
	int				t;
	int				o;
	int				prec;
	char			*tab;
	int				n;
	int				c;
	int				w;
	int				z;
}					t_struct;


int			ft_printf(const char *argff, ...);
int			ft_flag(char *str, t_struct *prsg);
int			ft_width(char *str, va_list *arg_ptr, t_struct *prsg);
int			ft_precision(char *str, va_list *arg_ptr, t_struct *prsg);

void		ft_string(char str, t_struct *prsg);
void		ft_prec_nb(t_struct *prsg);
void		ft_space_f(char str, t_struct *prsg);
void		ft_ex(char str, t_struct *prsg);
void		ft_systm(char str, t_struct *prsg);

int			ft_putstr_t(char *s, int fd);
char		*ft_itoa_base_l(long long int nbr, char *base);
char		*ft_strdup_c(int d);
void		ft_zero_s(t_struct *prsg, char str);

char		*ft_strdup_f(char *str);
#endif
