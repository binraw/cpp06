#ifndef A_HPP
# define A_HPP

#include "Base.hpp"


class A : public Base
{
private:
    
public:
    A();
    ~A();
    A(const A &other);
    A &operator=(const A &other);
    std::string getType() const { return "A"; }
};

A::A()
{
}

A::~A()
{
}

A::A(const A &other)
{
    *this = other;
}
A &A::operator=(const A &)
{
    return *this;
}

#endif 

