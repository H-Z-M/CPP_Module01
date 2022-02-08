NAME = ref
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
SRCS_DIR = ./
SRCS = main.cpp
OBJS_DIR = obj/
OBJ = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))
RM = rm -rf
DEPS = $(OBJS:.o=.d)

all : $(NAME)
-include $(DEPS)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

debug :
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS) -fsanitize=address
	@$(RM) "$(NAME).d"

test : $(NAME)
	@./$(NAME)

.PHONY: all clean fclean re debug test
