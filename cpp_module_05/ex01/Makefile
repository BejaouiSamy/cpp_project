EXEC = Form

SRC = ./src/main.cpp ./src/Bureaucrat.cpp ./src/Form.cpp
HEADERS = ./include/Bureaucrat.hpp ./include/Form.hpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXEC)

$(EXEC): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)

fclean: clean

re : fclean all

