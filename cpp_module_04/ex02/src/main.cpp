#include "../include/Animal.hpp"
#include "../include/OtherAnimal.hpp"


int main(void)
{
    Animal* array[100];
    int i;

    i = 0;
    while (i < 100)
    {
        if (i < 50)
        {
            array[i] = new Dog();
            std::cout << "Dog " << i << " created." << std::endl;
        }
        else
        {
            array[i] = new Cat();
            std::cout << "Cat " << i << " created." << std::endl;
        }
        i++;
    }
    i = 0;
    while (i < 100)
    {
        delete array[i];
        i++;
    }

    std::cout << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdeas(0, "I want to eat");
    Dog dog2 = dog1;
    dog2.getBrain()->setIdeas(0, "I want to play");
    dog1.getBrain()->getIdeas(0);  // "I want to eat"
    dog2.getBrain()->getIdeas(0);  // "I want to play"
}

