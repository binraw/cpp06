#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base
{
private:
    
public:
    C();
    ~C();
    C(const C &other);
    C &operator=(const C &other);
    std::string getType() const  { return "C"; }
};

C::C()
{
}

C::~C()
{
}

C::C(const C &other)
{
    *this = other;
}
C &C::operator=(const C &)
{
    return *this;
}

#endif 