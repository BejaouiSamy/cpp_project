#include "../include/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called." << std::endl;
    type = "Monkey";
}

Animal::Animal(const std::string& other)
{
    std::cout << "Animal copy constructor called." << std::endl;
    type = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called." << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "*UNKNOW ANIMAL NOISES*" << std::endl;
}

std::string Animal::getType(void) const
{
    return type;
}