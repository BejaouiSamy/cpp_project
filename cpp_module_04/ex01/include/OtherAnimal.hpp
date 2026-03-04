#ifndef OTHERANIMAL_HPP
#define OTHERANIMAL_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat(void);
        virtual ~Cat();
        Cat(const Cat& other);
        Cat& operator=(Cat const& other);
        void makeSound(void) const;
        Brain* getBrain(void) const;
};

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog(void);
        virtual ~Dog();
        Dog(const Dog& other);
        Dog& operator=(Dog const& other);
        void makeSound(void) const;
        Brain* getBrain(void) const;

};

class WrongAnimal
{
    private:
        std::string type;
    public:
        WrongAnimal(void);
        ~WrongAnimal();
        void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        ~WrongCat();
        void makeSound(void) const;
};

#endif