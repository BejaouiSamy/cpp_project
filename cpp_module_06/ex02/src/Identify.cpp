#include "../include/Identify.hpp"

Base::~Base(void) {}

Base* generate(void)
{
    int r = rand() % 3;
    
    if (r == 0)
        return new A();
    else if (r == 1)
        return new B();
    else
        return new C();
}

void identify(Base *p)
{
    //check if nullptr
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    //with & cannot catch the nullptr so it throw an excep
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast&) {}
    
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast&) {}
    
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast&) {}
    
}