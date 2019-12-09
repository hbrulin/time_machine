# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 15:50:08 by hbrulin           #+#    #+#              #
#    Updated: 2019/12/09 17:11:13 by hbrulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = time_machine

SRCS =	time_machine.c ft_lstadd_back.c ft_lstnew.c ft_lstclear.c

HEADER = header.h
CFLAGS = -Wall -Werror -Wextra -MMD -I $(HEADER) -g
BUILD_DIR = obj

OBJS = $(SRCS:.c=.o)
OBJ = $(addprefix $(BUILD_DIR)/,$(OBJS))
DPD = $(OBJ:.o=.d)

opti :
	@make -j all

all : $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(NAME) created"

$(BUILD_DIR)/%.o: %.c Makefile
	@mkdir -p $(BUILD_DIR)
	@gcc $(CFLAGS) -c $< -o $@

clean:
	@/bin/rm -rf $(BUILD_DIR)
	@echo "Object and DPD files deleted"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Lib deleted"

cleanlog:
	@/bin/rm logtime.txt
	@echo "logtime.txt deleted"

re : 
	@make fclean
	@make opti

.PHONY: all, clean, fclean, re

-include $(DPD)
