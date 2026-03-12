EXEC = Identify

SRC = ./src/Identify.cpp ./src/main.cpp
HEADER = ./include/Identify.hpp
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(EXEC)

$(EXEC): $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)

fclean: clean

re: fclean all