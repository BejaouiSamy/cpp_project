#include <iostream>
#include <string>
#include "Array.hpp"

int	main(void)
{
	Array<int> numbers(5);
	for (unsigned int i = 0; i < numbers.size(); ++i)
		numbers[i] = static_cast<int>(i * 10);

	std::cout << "numbers: ";
	for (unsigned int i = 0; i < numbers.size(); ++i)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;

	Array<int> copy(numbers);
	copy[0] = 999;
	std::cout << "original[0] = " << numbers[0] << std::endl;
	std::cout << "copy[0] = " << copy[0] << std::endl;

	Array<std::string> words(3);
	words[0] = "hello";
	words[1] = "42";
	words[2] = "templates";
	std::cout << "words: ";
	for (unsigned int i = 0; i < words.size(); ++i)
		std::cout << words[i] << " ";
	std::cout << std::endl;

	try
	{
		std::cout << words[10] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	return (0);
}