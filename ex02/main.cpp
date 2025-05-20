#include "Base.hpp"



int main(void)
{
    Base *first;
    Base *second;
    Base *next;


    first = Base::generate();
    second = Base::generate();
    next = Base::generate();
    Base::identify(first);
    Base::identify(second);
    Base::identify(*next);

    delete first;
    delete second;
    delete next;
}