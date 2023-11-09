NAME = philo

CC = gcc

FLAGS = -g -pthread -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
