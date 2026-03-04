#ifndef OTHERANIMAL_HPP
#define OTHERANIMAL_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const std::string& other);
        Cat& operator=(const Cat& other);
        virtual ~Cat(void);
        void makeSound(void) const;
};

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const std::string& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog(void);
        void makeSound(void) const;
};


#endif