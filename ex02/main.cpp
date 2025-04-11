#include "Base.hpp"



int main(void)
{
    Base *first;
    Base *second;
    Base *next;
    Base *last;


    first = Base::generate();
    second = Base::generate();
    next = Base::generate();
    Base::identify(first);
    Base::identify(second);
    Base::identify(*next);
    std::cout << "Begin loop: " << std::endl;
    for (size_t i = 0; i < 8; i++)
    {        
        last = Base::generate();
        Base::identify(last);
        delete last;
    }
    delete first;
    delete second;
    delete next;
}