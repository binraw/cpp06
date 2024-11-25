#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>


// class A;
// class B;
// class C;

class Base
{
protected:
    Base();
public:
    
    virtual ~Base();

   static Base *generate(void);
   static void identify(Base* p);
   static void identify(Base& p);
};



#endif
