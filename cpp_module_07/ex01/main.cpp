#include <iostream>
#include <string>
#include "Iter.hpp"

template <typename T>
void	printElement(T const &value)
{
	std::cout << value << " ";
}

void	increment(int &value)
{
	++value;
}

void	appendDot(std::string &value)
{
	value += ".";
}

int	main(void)
{
	int			numbers[] = {1, 2, 3, 4, 5};
	std::string	words[] = {"hello", "42", "template"};

	std::cout << "numbers: ";
	iter(numbers, 5, printElement<int>);
	std::cout << std::endl;

	iter(numbers, 5, increment);
	std::cout << "numbers incremented: ";
	iter(numbers, 5, printElement<int>);
	std::cout << std::endl;

	std::cout << "words: ";
	iter(words, 3, printElement<std::string>);
	std::cout << std::endl;

	iter(words, 3, appendDot);
	std::cout << "words changed: ";
	iter(words, 3, printElement<std::string>);
	std::cout << std::endl;

	return (0);
}
