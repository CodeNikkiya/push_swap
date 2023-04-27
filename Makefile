# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 19:24:56 by npavelic          #+#    #+#              #
#    Updated: 2023/04/27 19:25:00 by npavelic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft

SRCS = arg_single.c begin_to_sort.c element_counter.c finish_sorting.c freedom_funcs.c \
       input_validate.c main.c move_calculators.c push_to_b.c pushers.c rev_rot.c \
       rotate.c sorter_funcs.c stack_fill.c swapper.c up_to_three_elements.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT_DIR)/$(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft

$(LIBFT_DIR)/$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all
