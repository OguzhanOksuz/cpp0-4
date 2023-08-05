NAME	=	phonebook

CC	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC	=	main.cpp	\
		PhoneBook.cpp	\
		Contact.cpp	

OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

