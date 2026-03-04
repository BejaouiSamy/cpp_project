#include "../include/OtherAnimal.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called." << std::endl;
    type = "Cat";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "*prrrrrrr* Meow !" << std::endl;
}

Cat::Cat(const std::string& other)
{
    std::cout << "Cat copy constructor called." << std::endl;
    type = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

// ------------------------------------------------------------------------------

Dog::Dog(void)
{
    std::cout << "Dog constructor called." << std::endl;
    type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "WOUAF WOUAF !" << std::endl;
}

Dog::Dog(const std::string& other)
{
    std::cout << "Dog copy constructor called." << std::endl;
    type = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called." << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}   