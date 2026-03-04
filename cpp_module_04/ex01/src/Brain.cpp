#include "../include/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain& Brain::operator=(Brain const& other)
{
    int i;

    i = 0;
    std::cout << "Assignement called." << std::endl;
    if (this == &other)
        return *this;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
    return (*this);
}

Brain::Brain(const Brain& other)
{
    int i;

    i = 0;
    std::cout << "Copy constructor called." << std::endl;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
}

void Brain::getIdeas(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Index out of range." << std::endl;
        return ;
    }
    std::cout << this->ideas[index] << std::endl;
}

void Brain::setIdeas(int index, std::string idea)
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Index out of range." << std::endl;
        return ;
    }
    this->ideas[index] = idea;
}