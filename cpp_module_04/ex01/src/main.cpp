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

    // delete tous les animaux
    i = 0;
    while (i < 100)
    {
        delete array[i];
        i++;
    }
    std::cout << std::endl;
    std::cout << "=== TEST DEEP COPY ===" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdeas(0, "I want to eat");
    dog1.getBrain()->setIdeas(1, "I want to sleep");

    Dog dog2 = dog1;  // deep copy

    // modifier dog2 ne doit PAS affecter dog1
    dog2.getBrain()->setIdeas(0, "I want to play");

    std::cout << "dog1[0]: "; dog1.getBrain()->getIdeas(0); // "I want to eat"  ✅
    std::cout << "dog2[0]: "; dog2.getBrain()->getIdeas(0); // "I want to play" ✅
    std::cout << "dog1[1]: "; dog1.getBrain()->getIdeas(1); // "I want to sleep"✅
    std::cout << "dog2[1]: "; dog2.getBrain()->getIdeas(1); // "I want to sleep"✅

    // test index invalide
    dog1.getBrain()->getIdeas(-1);  // "Index out of range."
    dog1.getBrain()->getIdeas(100); // "Index out of range."
}