NAME		= fraction

GCC		= g++
FLAGS		= -Werror -Wextra -Wall

RM		= rm -f
RMDIR		= rm -rf

HDR_DIR		= ./inc/
HDRS		= $(wildcard $(HDR_DIR)*.hpp)

SRC_DIR		= ./src/
SOURCE		= $(wildcard $(SRC_DIR)*.cpp)

OBJ_DIR		= ./obj/
OBJS		= $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(SOURCE))

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJ_DIR)
	@$(GCC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(GCC) $(FLAGS) -o $(NAME) $(OBJS) $(HDRS)

clean:
	@$(RM) $(OBJS)
	@$(RMDIR) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

