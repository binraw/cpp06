#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base::Base(const Base &other)
{
    if (this != &other)
        *this = other;
    return *this;
}
Base &Base::operator=(const Base &other)
{
    return *this;
}
static int random = 0;

Base Base::*generate(void)
{
    if (random++ % 2 == 0)
    {
        if (random % 10 == 0)
            return new B();
        else
            return new A();
    }
    else
        return new C();
}

void Base::identify(Base* p);
{
    if (dynamic_cast<A>(p))
        std::cout << "type of object pointed : A" << std::endl;
    else if (dynamic_cast<B>(p))
        std::cout << "type of object pointed : B" << std::endl;
    else if (dynamic_cast<C>(p))
        std::cout << "type of object pointed : C" << std::endl;
}
void Base::identify(Base& p)
{

}