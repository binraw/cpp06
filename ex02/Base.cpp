#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base::Base()
{
}

Base::~Base()
{
}

Base::Base(const Base &other)
{
    *this = other;
}
Base &Base::operator=(const Base &)
{
    return *this;
}


Base* Base::generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int randomInt = std::rand() % 3;
    if (randomInt == 0)
        return new B();
    if (randomInt == 1)
            return new A();
    else
        return new C();
}

void Base::identify(Base* p)
{
    if (p)
        std::cout << "Type of object pointed : " << p->getType() << std::endl;

}

void Base::identify(Base& p)
{
    std::cout << "Type of object pointed : " << p.getType() << std::endl;
}