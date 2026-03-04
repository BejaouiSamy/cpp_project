#include "../include/Animal.hpp"
#include "../include/OtherAnimal.hpp"


int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Cat();
    const Animal* i = new Dog();
    const Animal* k;
    k = j;

    std::cout << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << k->getType() << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << std::endl;
    k->makeSound();
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;

}