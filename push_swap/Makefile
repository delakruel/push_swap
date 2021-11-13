NAME		=	push_swap
NAME_CH		=	checker

CC 			=	clang
CFLAGS		=	-Wextra -Wall -Werror

SRC			=	check_perf.c	commands_1.c	commands_2.c	commands_3.c \
				find_min.c	ft_split.c	get_next_line.c	main.c	push_swap.c \
				utils_1.c	utils_2.c	validate.c
SRC_CH		=	check_perf.c	commands_1.c	commands_2.c	commands_3.c \
				find_min.c	ft_split.c	get_next_line.c	checker.c	push_swap.c \
				utils_1.c	utils_2.c	validate.c
P_S_OBJS	=	$(SRC:.c=.o)
CHECK_OBJS	=	$(SRC_CH:.c=.o)

HEADER		=	push_swap.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY		:	all clean fclean re 

all			:	$(NAME) $(NAME_CH)

$(NAME)		: $(P_S_OBJS) $(HEADER)
			$(CC) $(CFLAGS) -o $(NAME) $(P_S_OBJS)

$(NAME_CH)	: $(CHECK_OBJS) $(HEADER)
			$(CC) $(CFLAGS) -o $(NAME_CH) $(CHECK_OBJS)

clean		:
	rm -f $(P_S_OBJS) $(CHECK_OBJS)

fclean		:	clean
	rm -f $(NAME) $(NAME_CH) 

re			:	fclean all