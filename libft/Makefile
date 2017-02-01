# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:24:10 by mfrancoi          #+#    #+#              #
#    Updated: 2017/02/01 02:55:03 by mfrancoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = includes/ft_atoi.c\
	   includes/ft_isalnum.c\
	   includes/ft_isalpha.c\
	   includes/ft_isascii.c\
	   includes/ft_isdigit.c\
	   includes/ft_isprint.c\
	   includes/ft_putchar.c\
	   includes/ft_putchar_fd.c\
	   includes/ft_putendl.c\
	   includes/ft_putendl_fd.c\
	   includes/ft_putnbr.c\
	   includes/ft_putnbr_fd.c\
	   includes/ft_putstr.c\
	   includes/ft_putstr_fd.c\
	   includes/ft_strlen.c\
	   includes/ft_tolower.c\
	   includes/ft_strcmp.c\
	   includes/ft_strdup.c\
	   includes/ft_toupper.c\
	   includes/ft_strcat.c\
	   includes/ft_strncat.c\
	   includes/ft_strchr.c\
	   includes/ft_strcpy.c\
	   includes/ft_strlcat.c\
	   includes/ft_strncmp.c\
	   includes/ft_strstr.c\
	   includes/ft_strnstr.c\
	   includes/ft_strncpy.c\
	   includes/ft_strnew.c\
	   includes/ft_strrchr.c\
	   includes/ft_strdel.c\
	   includes/ft_strclr.c\
	   includes/ft_striter.c\
	   includes/ft_striteri.c\
	   includes/ft_strmap.c\
	   includes/ft_strmapi.c\
	   includes/ft_strequ.c\
	   includes/ft_strnequ.c\
	   includes/ft_strsub.c\
	   includes/ft_strjoin.c\
	   includes/ft_strtrim.c\
	   includes/ft_strsplit.c\
	   includes/ft_itoa.c\
	   includes/ft_memcmp.c\
	   includes/ft_memset.c\
	   includes/ft_memcpy.c\
	   includes/ft_memmove.c\
	   includes/ft_memccpy.c\
	   includes/ft_memalloc.c\
	   includes/ft_memdel.c\
	   includes/ft_bzero.c\
	   includes/ft_memchr.c\
	   includes/ft_putstr_fd.c\
	   includes/ft_wnbr.c\
	   includes/ft_swap.c\
	   includes/ft_lstnew.c\
	   includes/ft_lstdelone.c\
	   includes/ft_lstdel.c\
	   includes/ft_lstadd.c\
	   includes/ft_lstiter.c\
	   includes/ft_lstmap.c\
	   includes/ft_foreach.c\
	   includes/ft_count_if.c\
	   includes/ft_sqrt.c\
	   includes/ft_realloc.c\

OBJS = ft_atoi.o\
	   ft_isalnum.o\
	   ft_isalpha.o\
	   ft_isascii.o\
	   ft_isdigit.o\
	   ft_isprint.o\
	   ft_putchar.o\
	   ft_putchar_fd.o\
	   ft_putendl.o\
	   ft_putendl_fd.o\
	   ft_putnbr.o\
	   ft_putnbr_fd.o\
	   ft_putstr.o\
	   ft_putstr_fd.o\
	   ft_strlen.o\
	   ft_tolower.o\
	   ft_strcmp.o\
	   ft_strdup.o\
	   ft_toupper.o\
	   ft_strcat.o\
	   ft_strncat.o\
	   ft_strchr.o\
	   ft_strcpy.o\
	   ft_strlcat.o\
	   ft_strncmp.o\
	   ft_strstr.o\
	   ft_strnstr.o\
	   ft_strncpy.o\
	   ft_strnew.o\
	   ft_strrchr.o\
	   ft_strdel.o\
	   ft_strclr.o\
	   ft_striter.o\
	   ft_striteri.o\
	   ft_strmap.o\
	   ft_strmapi.o\
	   ft_strequ.o\
	   ft_strnequ.o\
	   ft_strsub.o\
	   ft_strjoin.o\
	   ft_strtrim.o\
	   ft_strsplit.o\
	   ft_itoa.o\
	   ft_memcmp.o\
	   ft_memset.o\
	   ft_memcpy.o\
	   ft_memmove.o\
	   ft_memccpy.o\
	   ft_memalloc.o\
	   ft_memdel.o\
	   ft_bzero.o\
	   ft_memchr.o\
	   ft_putstr_fd.o\
	   ft_wnbr.o\
	   ft_swap.o\
	   ft_lstnew.o\
	   ft_lstdelone.o\
	   ft_lstdel.o\
	   ft_lstadd.o\
	   ft_lstiter.o\
	   ft_lstmap.o\
	   ft_foreach.o\
	   ft_count_if.o\
	   ft_sqrt.o\
	   ft_realloc.o\



GCC = gcc -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	@$(GCC) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
