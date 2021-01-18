/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 12:23:29 by frfrance          #+#    #+#             */
/*   Updated: 2020/01/07 15:00:42 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr_t(char *s, int fd)
{
	if (!s || !fd)
		return (0);
	write(fd, s, ft_strlen(s));
	return ((int)ft_strlen(s));
}


char		*ft_strdup_c(int c)
{
	char	*str;
	int		i;
	char	j;

	j = (char)c;
	i = 0;
	if (!j)
	{
		if (!(str = malloc(1 * sizeof(char))))
			return (NULL);
	}
	else
	{
		if (!(str = malloc(1 * sizeof(char))))
			return (NULL);
	}
	if (j)
		str[i++] = j;
	str[i] = '\0';
	return (str);
}

char	*ft_strdup_f(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	if (!str)
	{
		dest = ft_strdup("(null)");
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char			*ft_itoa_base_l(long long int n, char *base)
{
	char		*str;

	if (!(str = (char *)ft_calloc(sizeof(char), 2)))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa_base_l(-n, base), 3);
	}
	else if (n >= (long long int)ft_strlen(base))
	{
		free(str);
		str = ft_strjoin(ft_itoa_base_l(n / ft_strlen(base), base),
			ft_itoa_base_l(n % ft_strlen(base), base), 3);
	}
	else if (n < (long long int)ft_strlen(base) && n >= 0)
	{
		str[0] = base[n];
		str[1] = '\0';
	}
	return (str);
}

void		ft_zero_s(t_struct *p, char str)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	j = (p->t > 0) ? p->t : -p->t;
	tmp = ft_calloc(sizeof(char), (j + 1));
	if (!ft_strlen(p->tab) && str == 'j')
		j--;
	while (j-- > ((!ft_strlen(p->tab) ? 0 : ft_strlen(p->tab))))
		tmp[i++] = '0';
	tmp[i] = '\0';
	tmp = ft_strjoin(tmp, p->tab, 1);
	free(p->tab);
	p->tab = tmp;
}
