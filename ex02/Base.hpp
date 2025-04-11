#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>


class Base
{
protected:
    Base();
    Base(const Base &other);
    Base &operator=(const Base &);
public:
    
    virtual ~Base();

   static Base *generate(void);
   static void identify(Base* p);
   static void identify(Base& p);
};



#endif
