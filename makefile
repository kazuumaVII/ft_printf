# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/27 11:19:12 by frfrance          #+#    #+#              #
#    Updated: 2020/01/06 11:45:24 by frfrance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = srcs/ft_printf.c \
  		srcs/ft_args.c \
		srcs/ft_systeme.c \
		srcs/ft_utile.c \



OBJS = $(SRCS:.c=.o)
LIB_OBJS = ./libft/*.o
INCLUDES = ./includes/ft_printf.h
LIB = ./libft/libft.a
CFLAGS =
LOGFILE=$(LOGPATH) `date +'%y.%m.%d %H:%M:%S'`

all : $(NAME)

.c.o : $(SRCS)
	@(gcc -c $(CFLAGS) -I $(INCLUDES) $^ -o $(^:.c=.o))

$(NAME) : $(OBJS)
	@(make -C libft)
	@(ar rcs $(NAME) $(OBJS) $(LIB_OBJS))
	@(echo "ft_printf compiled")

ex : $(NAME)
	@echo "Compilation du pogramme..."
	@(gcc $(CFLAGS) $(NAME) main_v1.c -I $(INCLUDES))
	@(./a.out)
	make fclean

clean :
	@(rm -f $(OBJS))
	@(make clean -C libft)
	@(echo "ft_printf cleaned")

cleanlib :
	@(make fclean -C libft)

fclean : cleanlib clean
	@(rm -rf $(NAME))
	@(rm -f libft.a)
	@(rm -rf a.out.dSYM)
	@(rm -f a.out)
	@(echo "ft_printf full cleaned")

git : fclean
	git add *
	git commit -m "$(LOGFILE)"
	git push

re : fclean all
