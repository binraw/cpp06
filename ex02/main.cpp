#include "Base.hpp"



int main(void)
{
    Base *first;
    Base *next;


    first = generate();
    next = generate();
    std::cout << "the actual type of the object pointed to by p : " << std::endl;
    identify(first);
    
    std::cout << "the actual type of the object pointed to by p with Base& : " << std::endl;
    identify(*next);
    delete first;
    delete next;
}