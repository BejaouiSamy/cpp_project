EXEC = ScalarConverter

SRC = ./src/Scalar.cpp ./src/main.cpp
HEADERS = ./include/Scalar.hpp

CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(EXEC)

$(EXEC): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean: 
	rm -f $(EXEC)

fclean: clean

re: fclean all