EXEC = Serializer

SRC = ./src/Serializer.cpp ./src/main.cpp
HEADER = ./include/Serializer.hpp
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(EXEC)

$(EXEC): $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)

fclean: clean

re: fclean all