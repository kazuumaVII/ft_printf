/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 18:00:35 by frfrance          #+#    #+#             */
/*   Updated: 2020/01/07 11:19:21 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int		i = 0;
	char	*string = ft_strdup("Salut cest cool");
	char	*ptr = ft_strdup("Salut cest cool");
	char	*ptr_null = NULL;

	printf("\n|----	 		 Debut	  		 ----|\n\n");

				printf("         chiffre direct         \n");




	i = ft_printf("1|%5c|\n", '\0');
	i = ft_printf("2|%4d|\n", 21);
	i = ft_printf("3|%9s|\n", string);
	i = ft_printf("4|%4d|\n\n", -21);

	i = printf("1|%5c|\n", '\0');
	i = printf("2|%4d|\n", 21);
	i = printf("3|%9s|\n", string);
	i = printf("4|%4d|\n", -21);

/*
				printf("\n         Chiffre et tirait        \n");
	i = ft_printf("1|%-4c|\n", 't');
	i = ft_printf("2|%-4d|\n", 21);
	i = ft_printf("3|%-9s|\n\n", string);

	i = printf("1|%-4c|\n", 't');
	i = printf("2|%-4d|\n", 21);
	i = printf("3|%-9s|\n", string);

				printf("\n          Chiffre et point        \n");
	i = ft_printf("1|%10.1%|\n");
	i = ft_printf("2|%10.7d|\n", 14);
	i = ft_printf("3|%-10.10d|\n", 14);
	i = ft_printf("4|%7.1s|\n", string);
	i = ft_printf("5|%8.9s|\n", string);
	i = ft_printf("6|%50.2s|\n", NULL);
	i = ft_printf("7|%5.1s|\n", "Hello");
	i = ft_printf("8|%1.50d|\n\n", -10);

	i = printf("1|%10.1%|\n");
	i = printf("2|%10.7d|\n", 14);
	i = printf("3|%-10.10d|\n", 14);
	i = printf("4|%7.1s|\n", string);
	i = printf("5|%8.9s|\n", string);
	i = printf("6|%50.2s|\n", NULL);
	i = printf("7|%5.1s|\n", "Hello");
	i = printf("8|%1.50d|\n", -10);

*/
				printf("\n         Zero                   \n");
	i = ft_printf("1|%09d|\n", 14);
	i = ft_printf("2|%010d|\n", 42);
	i = ft_printf("3|%02s|\n", string);
	i = ft_printf("4|%010%|\n");
	i = ft_printf("5|%%p::[%010d]|\n\n", -8473);

	i = printf("1|%09d|\n", 14);
	i = printf("2|%010d|\n", 42);
	i = printf("3|%02s|\n", string);
	i = printf("4|%010%|\n");
	i = printf("5|%%p::[%010d]|\n", -8473);
/*
				printf("\n           Zero et tirait                 \n");
	i = ft_printf("1|%-010d|\n", -42);
	i = ft_printf("2|%-010d|\n", 42);
	i = ft_printf("3|%-09s|\n", string);
	i = ft_printf("4|%-010%|\n\n");

	i = printf("1|%-010d|\n", -42);
	i = printf("2|%-010d|\n", 42);
	i = printf("3|%-09s|\n", string);
	i = printf("4|%-010%|\n");

				printf("\n       Zero et '*'             \n");
	i = ft_printf("1|%0*d|\n", 5, 7);
	i = ft_printf("2|%0*d|\n", -5, 3);
	i = ft_printf("3|%0*d|\n\n", 5, -3);

	i = printf("1|%0*d|\n", 5, 7);
	i = printf("2|%0*d|\n", -5, 3);
	i = printf("3|%0*d|\n", 5, -3);

				printf("\n            Point seulement             \n");
	i = ft_printf("1|%.2d|\n",54321);
	i = ft_printf("2|%.d|\n",54321);
	i = ft_printf("3|%.c|\n", '@');
	i = ft_printf("4|%.s|\n", string);
	i = ft_printf("5|%-.12i|\n", -20000000);
	i = ft_printf("6|%.2s|\n\n", ptr_null);

	i = printf("1|%.2d|\n",54321);
	i = printf("2|%.d|\n",54321);
	i = printf("3|%.c|\n", '@');
	i = printf("4|%.s|\n", string);
	i = printf("5|%-.12i|\n", -20000000);
	i = printf("6|%.2s|\n", ptr_null);

				printf("\n          Point et '*'             \n");
	i = ft_printf("1|%.*d|\n", -7, -324);
	i = ft_printf("2|%.*d|\n", 5, 324);
	i = ft_printf("3|%*.*d|\n\n", -20, -10, 33);

	i = printf("1|%.*d|\n", -7, -324);
	i = printf("2|%.*d|\n", 5, 324);
	i = printf("3|%*.*d|\n", -20, -10, 33);

				printf("\n           CHELOU             \n");
	i = ft_printf("1|%*%|\n", 13);
	i = ft_printf("2|%0.*d|\n", 50, 5);
	i = ft_printf("3|%.*s|\n", 16, "coucou");
	i = ft_printf("4|%*d|\n", 3, 0);
	i = ft_printf("5|%*.*d|\n\n", 3, 5, 3);

	i = printf("1|%*%|\n", 13);
	i = printf("2|%0.*d|\n", 50, 5);
	i = printf("3|%.*s|\n", 16, "coucou");
	i = printf("4|%*d|\n", 3, 0);
	i = printf("5|%*.*d|\n", 3, 5, 3);

				printf("\n              Adresse             \n");
	i = ft_printf("1|%10p|\n", &string);
	i = ft_printf("2|%15p|\n", &string);
	i = ft_printf("3|%-15p|\n\n", &string);

	i = printf("1|%10p|\n", &string);
	i = printf("2|%15p|\n", &string);
	i = printf("3|%-15p|\n", &string);

*/
				printf("\n          Autre            \n");
	i = ft_printf("1|Hello 42 school! |%s|", NULL);
	i = ft_printf("2|%0d| chiffre 2 |%0d|\n", 42, -42);
	i = ft_printf("3|%d| , |%d| , |%d| , |%d|  |%u| , |%u|, |%u| , |%u|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
	i = ft_printf("4|%s|\n", ptr_null);
	i = ft_printf("5|%*d| |%*s|, |%*i|\n\n", 10, 10, 5, "coucou", 4, 40);

	i = printf("1|Hello 42 school! |%s|\n", NULL);
	i = printf("2|%0d| chiffre 2 |%0d|\n", 42, -42);
	i = printf("3|%d| , |%d| , |%d| , |%d|  |%u| , |%u|, |%u| , |%u|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
	i = printf("4|%s|\n", ptr_null);
	i = printf("5|%*d| |%*s|, |%*i|\n", 10, 10, 5, "coucou", 4, 40);

	printf("\n\n|----	  		  Fin	   		 ----|\n\n");

	return (0);
}
