EXEC = Animal

SRC = ./src/main.cpp ./src/OtherAnimal.cpp ./src/Animal.cpp
HEADER = ./include/Animal.hpp ./include/OtherAnimal.hpp

CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)

fclean:	clean

re:	fclean all