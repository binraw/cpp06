#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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


static int random = 0;

Base* Base::generate(void)
{
    if (random == 10 || random == 20)
        return new B();
    if (random++ % 2 == 0)
            return new A();
    else
        return new C();
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "type of object pointed : A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "type of object pointed : B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "type of object pointed : C" << std::endl;
}

void Base::identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "type of object pointed : A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "type of object pointed : B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "type of object pointed : C" << std::endl;
}