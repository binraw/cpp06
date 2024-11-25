#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


class Base
{
private:
    Base(/* args */);
public:
    
    virtual ~Base();
	Base(const Base &other);
	Base &operator=(const Base &other);

   Base *generate(void);
   void identify(Base* p);
   void identify(Base& p);
};



#endif
