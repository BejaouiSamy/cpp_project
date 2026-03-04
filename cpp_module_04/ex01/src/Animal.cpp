#include "../include/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called." << std::endl;
    type = "Monkey";
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

Animal::Animal(const Animal& other)
{
    std::cout << "Copy called." << std::endl;
    *this = other ;
}

Animal& Animal::operator=(Animal const &other)
{
    std::cout << "Assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}