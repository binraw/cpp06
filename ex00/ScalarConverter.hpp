#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip> 


class ScalarConverter
{
private:
    ScalarConverter();
    ~ScalarConverter();

public:
   static void convert(std::string value);
    
};




#endif