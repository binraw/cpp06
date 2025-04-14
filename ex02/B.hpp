#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
private:
    
public:
    B();
    ~B();
    B(const B &other);
    B &operator=(const B &);
    std::string getType() const  { return "B"; }
};

B::B()
{
}

B::~B()
{
}

B::B(const B &other)
{
    *this = other;
}
B &B::operator=(const B &)
{
    return *this;
}


#endif 