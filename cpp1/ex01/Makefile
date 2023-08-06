NAME	=	Zombie

CC	=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC	=	Zombie.cpp	\
		zombieHorde.cpp	\
		main.cpp

OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

