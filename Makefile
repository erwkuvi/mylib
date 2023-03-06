# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 13:28:25 by ekuchel           #+#    #+#              #
#    Updated: 2023/03/03 12:19:47 by ekuchel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c \
ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_split.c\
ft_putendl_fd.c ft_putnbr_fd.c

SRC_OBJ = $(SRC:.c=.o)

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
ft_lstdelone.c ft_lstlast.c ft_lstnew.c ft_lstsize.c \
ft_lstiter.c ft_lstmap.c

BONUS_OBJS        = $(BONUS:.c=.o)

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIB) $(NAME) $(SRC_OBJ)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

# Rules to be used in Libft-war-machine test
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(SRC_OBJ) $(BONUS_OBJ)

SO = libft.so

# Rule to clean all .o .a and libft.so
test:
	$(RM) $(SRC_OBJ) $(BONUS_OBJ) $(SO) $(NAME)
