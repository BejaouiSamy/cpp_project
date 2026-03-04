#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100]; // ideas du cerveau, 100 idées max
    public:
        Brain(void);
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(Brain const& other);
        void getIdeas(int index) const;
        void setIdeas(int index, std::string idea);
};

#endif