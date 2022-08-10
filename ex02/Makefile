CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = fixed3

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:	
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all